/*
*  Copyright (c) 2010, 2011 José Abelardo Gutiérrez <jabelardo@gmail.com>
*
*  This program is free software; you can redistribute it and/or modify
*  it under the terms of the GNU General Public License as published by
*  the Free Software Foundation; under version 2 of the License.
*
*  This program is distributed in the hope that it will be useful,
*  but WITHOUT ANY WARRANTY; without even the implied warranty of
*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*  GNU General Public License for more details.
*
*  You should have received a copy of the GNU General Public License
*  along with this program.  If not, see <http://www.gnu.org/licenses>.
*/

#include <sstream>
#include <cmath>
#include "UserCab.h"
#include "UserCabReader.h"
#include "UtilString.h"

size_t const UserCab::MEM_IMAGE_SIZE = 2048;

UserCab::UserCab ()
: slot_M (-1)
, filePath_M (String::empty)
, name_M (String::empty)
, monoLeft_M (false)
, level_M (0)
, permanent_M (false)
{
}

UserCab::UserCab (UserCab const& userCab)
: slot_M (userCab.slot_M)
, filePath_M (userCab.filePath_M)
, name_M (userCab.name_M)
, monoLeft_M (userCab.monoLeft_M)
, level_M (userCab.level_M)
, permanent_M (userCab.permanent_M)
{
}

UserCab::UserCab (int slotArg, String const& filePathArg, String const& nameArg, bool monoLeftArg, double levelArg, bool permanentArg)
: slot_M (slotArg)
, filePath_M (filePathArg)
, name_M (nameArg)
, monoLeft_M (monoLeftArg)
, level_M (levelArg)
, permanent_M (permanentArg)
{
}

UserCab const& UserCab::operator = (UserCab const& userCab)
{
	if (this != &userCab)
	{
		this->slot_M = userCab.slot_M;
		this->filePath_M = userCab.filePath_M;
		this->name_M = userCab.name_M;
		this->monoLeft_M = userCab.monoLeft_M;
		this->level_M = userCab.level_M;
		this->permanent_M  = userCab.permanent_M;
	}
	return *this;
}


bool UserCab::isPermanent () const
{
	return permanent_M;
}

bool UserCab::isMonoLeft () const
{
	return monoLeft_M;
}

int UserCab::getSlot () const
{
	return slot_M;
}

String UserCab::getFilePath () const
{
	return filePath_M;
}

String UserCab::getName () const
{
	return name_M;
}

double UserCab::getLevel () const
{
	return level_M;
}

void UserCab::setSlot (int slotArg)
{
	slot_M = slotArg;
}

void UserCab::setFilePath (String const& filePathArg)
{
	filePath_M = filePathArg;
}

void UserCab::setName (String const& nameArg)
{
	name_M = nameArg;
}

void UserCab::setLevel (double levelArg)
{
	level_M = levelArg;
}

void UserCab::setPermanent (bool permanentArg)
{
	permanent_M = permanentArg;
}


void UserCab::setMonoLeft (bool monoLeftArg)
{
	monoLeft_M = monoLeftArg;
}

double UserCab::getGain() const
{
	return pow(10, level_M/20);
}

std::auto_ptr<MemoryBlock> UserCab::buildIRData (bool multiple) const
{
	UserCabReader reader(*this);
	if (!reader.readIRFile())
	{
		return std::auto_ptr<MemoryBlock>();
	}
	/*
	Each IR user cabinet takes up 2048-(name+cab index+permenant flag) bytes so I pad until the end.
	I add the name and the location index (0-9) then I add the last byte of the 2048 block to tell
	the GSP1101 to store the user cabinet permanently or just be temporary.
	*/

	int const idx = getSlot() - 1;
	std::auto_ptr<MemoryBlock> memImage(new MemoryBlock(UserCab::MEM_IMAGE_SIZE, 0));
	int memImagePos = 0;
	int const maxCh = 22;

/*                     0  0   1   0  1  0  1
    MONOLEFT: 00 <15> 00 00 _0a_ 00 73 4a 59

    DEFAULT : 00 <15> 00 00 _00_ 00 73 4a 59
*/

	// Add coef count, max = 128 (stereo) 208 (mono)
	// we should read the data count in the wav file to check the size
	{
		unsigned char tmpBuffer[4];
		tmpBuffer[0] = 0x00;
		tmpBuffer[1] = 0x00;
		tmpBuffer[2] = static_cast<unsigned char>(reader.getCoefCount() >> 0x08);
		tmpBuffer[3] = static_cast<unsigned char>(reader.getCoefCount()); // <<<<<<<<<<<<<<<<<<<<<<<
		size_t const bytesRead = 4;
		memImage->copyFrom(tmpBuffer, memImagePos, bytesRead);
		memImagePos += bytesRead;
	}

	// Add coef data
	{
		size_t const bytesRead = reader.getCoefData().getSize();
		memImage->copyFrom(reader.getCoefData().getData(), memImagePos, bytesRead);
		memImagePos += bytesRead;
	}

	//Logger::outputDebugString("memImage = " +  asHex(*memImage));

	// Fill to end of cab, 2048 bytes total  (2048 in vC56 else it was 1024)
	{
		unsigned char tmpBuffer[1];
		tmpBuffer[0] = 0xff;
		size_t const bytesRead = 1;
		// Move to name location

		while (memImagePos < (UserCab::MEM_IMAGE_SIZE - maxCh - 1 - 2))
		{
			memImage->copyFrom(tmpBuffer, memImagePos, bytesRead);
			memImagePos += bytesRead;
		}
	}

	// Add name
	{
		unsigned char tmpBuffer[maxCh + 1];

		std::string labelName(getName().toUpperCase().toCString());
		if (!getName().compareIgnoreCase("USER") || getName().isEmpty())
		{
			std::ostringstream oss;
			oss << "USER "  << (idx + 1);
			labelName = oss.str();
		}
		int i;
		for (i = 0; i < maxCh; ++i)
		{
			tmpBuffer[i] = labelName[i];
			if (tmpBuffer[i] == 0)
			{
				break;
			}
		}
		for (; i < maxCh; ++i)
		{
			tmpBuffer[i]= ' ';
		}
		tmpBuffer[maxCh] = 0;
		size_t const bytesRead = maxCh + 1;
		memImage->copyFrom(tmpBuffer, memImagePos, bytesRead);
		memImagePos += bytesRead;         
	}

	// Move to cab index and perm location	
	{
		unsigned char tmpBuffer[1];
		tmpBuffer[0] = 0xff;
		size_t const bytesRead = 1;

		while (memImagePos < (UserCab::MEM_IMAGE_SIZE - 2))
		{
			memImage->copyFrom(tmpBuffer, memImagePos, bytesRead);
			memImagePos += bytesRead;
		}
	}
	// Add two more bytes indicating the cab's index and permanence bit
	{		
		unsigned char tmpBuffer[2];
		tmpBuffer[0] = static_cast<unsigned char>(idx);
		/*
		The next byte is the permanence flag.
		0 = no permanence, temporary
		1 = GSP1101 will store the cabinet then rebuild user cab data then restart
		2 = store cab to temp FLASH memory, this is so you can download multiple cabs
		before making them all permanent at the same time (see forum)
		*/
		if (isPermanent() && multiple) 
		{
			tmpBuffer[1] = 2;
		}
		else if (isPermanent()) 
		{
			tmpBuffer[1] = 1;
		}
		else
		{		
			tmpBuffer[1] = 0;
		}
		size_t const bytesRead = 2;
		memImage->copyFrom(tmpBuffer, memImagePos, bytesRead);
		memImagePos += bytesRead;
	}
	//Logger::outputDebugString("idx = " + String(idx));
	//Logger::outputDebugString("permanent = " + String(isPermanent()));
	//Logger::outputDebugString("multiple = " + String(multiple));
	//Logger::outputDebugString("memImagePos = " + String(memImagePos));

	return memImage;
}

std::auto_ptr<MidiBuffer> UserCab::createOutMidiBuffer(bool multiple) const
{
	std::auto_ptr<MemoryBlock> mb8 = buildIRData (multiple);
	if (mb8.get() == 0)
	{
		return std::auto_ptr<MidiBuffer>();
	}
	//Logger::outputDebugString("mb8 size = " + String(mb8->getSize()));
	//Logger::outputDebugString("mb8Hex = " + asHex(*mb8, true));

	int const midiDataSize = 256;
	int numMsgs = (mb8->getSize() / midiDataSize) + ((mb8->getSize() % midiDataSize) ? 1 : 0);

	//Logger::outputDebugString("numMsgs = " + String(numMsgs));
	
	std::auto_ptr<MidiBuffer> midiBuffer(new MidiBuffer);
	size_t bytesMB8Left = mb8->getSize();
	size_t deltaMB8 = 0;
	for (int i = 0; i < numMsgs; ++i)
	{
		size_t bytesMB8ToAppend = (bytesMB8Left > midiDataSize) ? midiDataSize : bytesMB8Left;

		// header: F0 00 00 10 00 5F 01 (procedure, download user cab is 7A)
		unsigned char const head_1[]= { 0xf0, 0x00, 0x00, 0x10, 0x00, 0x5f, 0x01, 0x7a, };

		// ending: checksum byte followed by F7 00 00
		unsigned char const ending[]= { 0x00, 0xf7, 0x00, 0x00, };
		MemoryBlock memBlk;

		memBlk.append (head_1, sizeof (head_1));

		/*
		The first 6 bytes written to the buffer are:
		{ 0x00, 0x05, 0x00, 0x00, 0x01, 0x00, };

		Being the first 4 bytes the address location of where the cabinet should be placed, msb first.
		The 0x00, 0x05 doesn't change.  All the 10 cabs fit into one 64k block.
		Since each cab takes 2048 bytes, the next two bytes will be:
		msb of (2048*cab index), lsb of (2048*cab index)

		You don't need to send all ending block that all have is FF padding, but the last block always
		must have idx = slot + 6
		*/
		unsigned char head_2[]= { 0x00, 0x05, 0x00, 0x00, 0x01, 0x00, };
		int const idx = slot_M - 1;
		int const memImageSize = 2048;
		int const count = (i + 1 < numMsgs) ? i : 7;
		head_2[2] = static_cast<unsigned char>(((idx * memImageSize) >> 0x08) + count);
		head_2[3] = static_cast<unsigned char>(idx * memImageSize);
		MemoryBlock payload(head_2, sizeof (head_2));

		/*
    MONOLEFT: f0 00 00 10 00 5f 01 7a <00> 00 05 00 00 01 00 - 00 <15> 00 00 _0a_ 00 73 4a 59

    DEFAULT : f0 00 00 10 00 5f 01 7a <00> 00 05 00 00 01 00 - 00 <15> 00 00 _00_ 00 73 4a 59
*/
		payload.append (static_cast<unsigned char*>(mb8->getData()) + deltaMB8, bytesMB8ToAppend);
		std::auto_ptr<MemoryBlock> mb7 = from8to7 (payload.getData(), 0, bytesMB8ToAppend + sizeof (head_2));

		size_t bytesMB7ToAppend = mb7->getSize();
		memBlk.append (static_cast<unsigned char*>(mb7->getData()), bytesMB7ToAppend);
		memBlk.append (ending, sizeof (ending));

		//the checksum is calculated by XORing all bytes after the F0 and before the checksum
		unsigned char checksum = 0x00;
		for (size_t j = 0; j < bytesMB7ToAppend + sizeof (head_1) - 1; ++j)
		{
			checksum ^= memBlk[j + 1];
		}
		memBlk[bytesMB7ToAppend + sizeof (head_1)] = checksum;

		//Logger::outputDebugString("mb8 = " +  asHex(static_cast<unsigned char*>(mb8.getData()) + deltaMB8, bytesMB8ToAppend, true));
		//Logger::outputDebugString("mb7 = " +  asHex(*mb7));
		//Logger::outputDebugString("memBlk = " +  asHex(memBlk));

		MidiMessage midiMessage (memBlk.getData(), memBlk.getSize());
		midiBuffer->addEvent (midiMessage, midiBuffer->getNumEvents() + 1);
		bytesMB8Left -= bytesMB8ToAppend;
		deltaMB8 += bytesMB8ToAppend;
	}

	return midiBuffer;
}

std::auto_ptr<MemoryBlock> UserCab::from8to7 (void const* srcData, int srcOffset, size_t numBytes)
{
	size_t toProcSize = numBytes;

	std::auto_ptr<MemoryBlock> memImage (new MemoryBlock);
	int pos = srcOffset;
	unsigned char const* mb8 = static_cast<unsigned char const*>(srcData);
	while (toProcSize >= 7)
	{
		unsigned char buffer[]= { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, };
		buffer[0] |= (mb8[0 + pos] & 0x80) >> 1;
		buffer[0] |= (mb8[1 + pos] & 0x80) >> 2;
		buffer[0] |= (mb8[2 + pos] & 0x80) >> 3;
		buffer[0] |= (mb8[3 + pos] & 0x80) >> 4;
		buffer[0] |= (mb8[4 + pos] & 0x80) >> 5;
		buffer[0] |= (mb8[5 + pos] & 0x80) >> 6;
		buffer[0] |= (mb8[6 + pos] & 0x80) >> 7;

		buffer[1] = mb8[0 + pos] & 0x7f;
		buffer[2] = mb8[1 + pos] & 0x7f;
		buffer[3] = mb8[2 + pos] & 0x7f;
		buffer[4] = mb8[3 + pos] & 0x7f;
		buffer[5] = mb8[4 + pos] & 0x7f;
		buffer[6] = mb8[5 + pos] & 0x7f;
		buffer[7] = mb8[6 + pos] & 0x7f;

		memImage->append(buffer, sizeof (buffer));
		toProcSize -= 7;
		pos += 7;
	}
	if (toProcSize > 0)
	{
		unsigned char buffer[]= { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, };
		for (size_t i = 0; i < toProcSize; ++i)
		{
			buffer[0] |= (mb8[i + pos] & 0x80) >> (i + 1);
			buffer[i + 1] = mb8[i + pos] & 0x7f;
		}
		memImage->append(buffer, toProcSize + 1);
	}
	return memImage;
}
