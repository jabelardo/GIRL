#include "UserCabReader.h"
#include "UserCab.h"
#include <sstream>

UserCabReader::UserCabReader(UserCab const& userCabArg)
: userCab_M(userCabArg)
, fiStream_M(File(userCab_M.getFilePath()))
, numberChannels_M(0)
, bytesPerSample_M(0)
, coefCount_M(0)
, coefData_M(UserCab::MEM_IMAGE_SIZE)
{
}

UserCabReader::~UserCabReader()
{
}

UserCabReader const& UserCabReader::operator = (UserCabReader const& userCabReader)
{
	return *this;
}

MemoryBlock const& UserCabReader::getCoefData() const
{
	return coefData_M;
}

juce::uint32 UserCabReader::getCoefCount() const
{
	return coefCount_M;
}

bool UserCabReader::readNumberChannels()
{
	unsigned char tmpBuffer[4];

	fiStream_M.read(tmpBuffer, 4);
	if (fiStream_M.isExhausted() || tmpBuffer[0] != 'R' || tmpBuffer[1] != 'I' || tmpBuffer[2] != 'F' || tmpBuffer[3] != 'F')
	{
		AlertWindow::showMessageBox (AlertWindow::WarningIcon, "Warinig", "Invalid Impulse File, not 'RIFF'");
		return false;
	}
	fiStream_M.read(tmpBuffer, 4);      // ignore size of file
	fiStream_M.read(tmpBuffer, 4);
	if (fiStream_M.isExhausted() || tmpBuffer[0] != 'W' || tmpBuffer[1] != 'A' || tmpBuffer[2] != 'V' || tmpBuffer[3] != 'E')
	{
		AlertWindow::showMessageBox (AlertWindow::WarningIcon, "Warinig", "Invalid Impulse File, not 'WAVE'");
		return false;
	}	
	fiStream_M.read(tmpBuffer, 4);
	if (fiStream_M.isExhausted() || tmpBuffer[0] != 'f' || tmpBuffer[1] != 'm' || tmpBuffer[2] != 't' || tmpBuffer[3] != ' ')
	{
		AlertWindow::showMessageBox (AlertWindow::WarningIcon, "Warinig", "Invalid Impulse File, not 'fmt '");
		return false;
	}
	fiStream_M.read(tmpBuffer, 4);   // 16 bytes if fmt
	if (fiStream_M.isExhausted() || tmpBuffer[0] != 0x10 || tmpBuffer[1] != 0 || tmpBuffer[2] != 0 || tmpBuffer[3] != 0)
	{
		AlertWindow::showMessageBox (AlertWindow::WarningIcon, "Warinig", "Invalid Impulse File, wrong fmt size");
		return false;
	}
	fiStream_M.read(tmpBuffer, 2);   // audio fmt = 1
	if (fiStream_M.isExhausted() || tmpBuffer[0] != 0x01 || tmpBuffer[1] != 0)
	{
		AlertWindow::showMessageBox (AlertWindow::WarningIcon, "Warinig", "Invalid Impulse File, audio fmt not 1");
		return false;
	}
	fiStream_M.read(tmpBuffer, 2);   // number of channels = 1 or 2
	if (fiStream_M.isExhausted() || (tmpBuffer[0] != 0x01 && tmpBuffer[0] != 0x02) || tmpBuffer[1] != 0)
	{
		AlertWindow::showMessageBox (AlertWindow::WarningIcon, "Warinig", "Invalid Impulse File, number channels not 1 or 2");
		return false;
	}
	numberChannels_M = tmpBuffer[0];
	return true;
}

bool UserCabReader::readBytesPerSample()
{
	unsigned char tmpBuffer[6];

	fiStream_M.read(tmpBuffer, 4);   // sample rate = 44100
	if (fiStream_M.isExhausted() || tmpBuffer[0] != 0x44 || tmpBuffer[1] != 0xac || tmpBuffer[2] != 0 || tmpBuffer[3] != 0)
	{
		AlertWindow::showMessageBox (AlertWindow::WarningIcon, "Warinig", "Invalid Impulse File, not 44100 Hz");
		return false;
	}
	fiStream_M.read(tmpBuffer, 6);   // skip byte rate and block align
	if (fiStream_M.isExhausted())
	{
		AlertWindow::showMessageBox (AlertWindow::WarningIcon, "Warinig", "Invalid Impulse File");
		return false;
	}
	fiStream_M.read(tmpBuffer, 2);   // bits per sample, lsb first
	if (fiStream_M.isExhausted())
	{
		AlertWindow::showMessageBox (AlertWindow::WarningIcon, "Warinig", "Invalid Impulse File");
		return false;
	}
	juce::uint16 bitsPerSample =  (juce::uint16)tmpBuffer[0] | ((juce::uint16)tmpBuffer[1] << 8);
	bytesPerSample_M = (bitsPerSample / 8) + ((bitsPerSample & 0x07) ? 1 : 0);
	if (fiStream_M.isExhausted() || bytesPerSample_M > 4 || bytesPerSample_M == 0)
	{
		AlertWindow::showMessageBox (AlertWindow::WarningIcon, "Warinig", "Invalid Impulse File, bad bytes per sample");
		return false;
	}
	return true;
}

bool UserCabReader::skipNonDataChunks()
{
	unsigned char tmpBuffer[4];
	for (;;)               
	{
		if (fiStream_M.isExhausted())
		{
			AlertWindow::showMessageBox (AlertWindow::WarningIcon, "Warinig", "Invalid Impulse File, could not find 'data' chunk");
			return false;
		}
		fiStream_M.read(tmpBuffer, 4);
		if (tmpBuffer[0] == 'd' && tmpBuffer[1] == 'a' && tmpBuffer[2] == 't' && tmpBuffer[3] == 'a')
		{
			break;
		}
		fiStream_M.read(tmpBuffer, 4);   // byte count in non 'data' chunk, skip it
		juce::int64 skipBytes = (juce::uint16)tmpBuffer[0] | ((juce::uint16)tmpBuffer[1] << 8) 
			                  | ((juce::uint32)tmpBuffer[2] << 16) | ((juce::uint32)tmpBuffer[3] << 24);
		fiStream_M.skipNextBytes(skipBytes);
	}
	return true;
}


bool UserCabReader::readCoefCount()
{
	unsigned char tmpBuffer[4];

	fiStream_M.read(tmpBuffer, 4);   // byte count in 'data'
	coefCount_M =  (juce::uint16)tmpBuffer[0] | ((juce::uint16)tmpBuffer[1] << 8) 
		                 | ((juce::uint32)tmpBuffer[2] << 16) | ((juce::uint32)tmpBuffer[3] << 24);

	coefCount_M /= bytesPerSample_M * numberChannels_M;
	
	if (!userCab_M.isMonoLeft())
	{
		if (coefCount_M > 128)
		{
			coefCount_M = 128;
		}
	}
	else
	{
		if (coefCount_M > 208)
		{
			coefCount_M = 208;
		}
	}

	if (fiStream_M.isExhausted() || coefCount_M == 0)
	{
		AlertWindow::showMessageBox (AlertWindow::WarningIcon, "Warinig", "Invalid Impulse File");
		return false;
	}
	return true;
}

bool UserCabReader::readCoefData()
{
	unsigned char tmpBuffer[4];

	size_t coefDataPos = 0;
	coefData_M.setSize(UserCab::MEM_IMAGE_SIZE);
	coefData_M.fillWith(0);

	//juce::uint32 coefCount = coefCount_M;
	//while (coefCount_--)
	for (juce::uint32 i = 0; i <  coefCount_M; ++i)
	{
		if (fiStream_M.isExhausted())
		{
			AlertWindow::showMessageBox (AlertWindow::WarningIcon, "Warinig", "Invalid Impulse File, not enough samples");
			return false;
		}

		unsigned char buffVal[]= { 0x00, 0x00, 0x00, 0x00, };
		fiStream_M.read(buffVal, bytesPerSample_M);    // lsb,...,msb
		juce::int32 bVal = buffVal[0];
		bVal |= (unsigned long)buffVal[1] << 8;
		bVal |= (unsigned long)buffVal[2] << 16;
		bVal |= (unsigned long)buffVal[3] << 24;
		switch (bytesPerSample_M)
		{
		case 1:
			if (bVal & 0x00000080)
			{
				bVal |= 0xffffff00;
			}
			bVal <<= 4*5;     // convert to 4.28
			break;
		case 2:
			if (bVal & 0x00008000)
			{
				bVal |= 0xffff0000;
			}
			bVal <<= 4*3;     // convert to 4.28
			break;
		case 3:
			if (bVal & 0x00800000)
			{
				bVal |= 0xff000000;
			}
			bVal <<= 4*1;     // convert to 4.28
			break;
		case 4:
			bVal >>= 4;    // convert to 4.28
			if (bVal & 0x08000000)
			{
				bVal |= 0xf0000000;
			}
			break;
		}
		float fc = (float)bVal * (float)userCab_M.getGain();
		bVal = (juce::int32) fc;
		tmpBuffer[0] = (unsigned char)(bVal >> 24);
		tmpBuffer[1] = (unsigned char)(bVal >> 16);
		tmpBuffer[2] = (unsigned char)(bVal >> 8);
		tmpBuffer[3] = (unsigned char)(bVal);
		size_t const bytesRead = 4;

		coefData_M.copyFrom(tmpBuffer, coefDataPos, bytesRead);
		coefDataPos  += bytesRead;

		if (numberChannels_M == 2)
		{
			// Ignore the other channel
			fiStream_M.read(buffVal, bytesPerSample_M);    // lsb,...,msb
		}
	}
	coefData_M.setSize(coefDataPos);
	return true;
}

bool UserCabReader::readIRFile ()
{
	if (!readNumberChannels())
	{
		return false;
	}

	if (!readBytesPerSample())
	{
		return false;
	}
	
	if (!skipNonDataChunks())
	{
		return false;
	}

	if (!readCoefCount())
	{
		return false;
	}

	if (!readCoefData())
	{
		return false;
	}
	return true;
}
