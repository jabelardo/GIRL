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

#include "Gsp1101.h"
#include "UserCab.h"
#include "UtilString.h"

#if defined (JUCE_WINDOWS)
	String const Gsp1101::GSP_1101_MIDI_ID = "DigiTech GSP1101 USB MIDI";
#elif defined (JUCE_LINUX)
	String const Gsp1101::GSP_1101_MIDI_ID = "DigiTech GSP1101";
#elif defined(JUCE_MAC)
	String const Gsp1101::GSP_1101_MIDI_ID = "DigiTech GSP1101";
#else
  #error "Unknown platform!"
#endif


Gsp1101::Gsp1101()
	: Thread("Gsp1101 Progress")
	, midiOutput_M(0)
	, midiInput_M(0)
	, midiOpen_M(false)
	, deviceReady_M(false)
	, lastMidiInput_M()
{
}

bool Gsp1101::testMidi ()
{
	// echo test.
	// F0 00 00 10 7F 7F 7F 01 6E F7
	unsigned char const echoTest[]= { 0xf0, 0x00, 0x00, 0x10, 0x7f, 0x7f, 0x7f, 0x01, 0x6e, 0xf7 };
	MidiMessage midiMessage (echoTest, sizeof(echoTest));

	if (openMidi())
	{
		lastMidiInput_M.setSize(0);
		midiOutput_M->sendMessageNow(midiMessage);

		unsigned char const testOK[]= { 0x00, 0x00, 0x10, 0x00, 0x5f, 0x01, 0x02, 0x00, 0x00, 0x5f, 0x01, 0x00, 0x12, };
		return waitForMidiInput(testOK);
	}
	else
	{
		AlertWindow::showMessageBox (AlertWindow::WarningIcon, "Warning", "MIDI Device Not Found");
		return false;
	}
}

bool Gsp1101::waitForMidiInput(unsigned char const testOK[])
{
	while (lastMidiInput_M.getSize() == 0)
	{
		Thread::yield();
		Thread::sleep(10);
	}
	
	//Logger::outputDebugString("testMidi Input = " + asHex(lastMidiInput_M.getData(), lastMidiInput_M.getSize(), false));
	
	return memcmp(testOK, lastMidiInput_M.getData(), lastMidiInput_M.getSize()) == 0;
}

void Gsp1101::printMidiDevices()
{
	StringArray outDevs = MidiOutput::getDevices ();
	StringArray inDevs  = MidiInput::getDevices ();
	String inDev, outDev;
	for (int i = 0; i < outDevs.size(); ++i)
	{
		outDev += "'" + outDevs[i] + "',";
	}
	for (int i = 0; i < inDevs.size(); ++i)
	{
		inDev += "'" + inDevs[i] + "',";
	}
	AlertWindow::showMessageBox (AlertWindow::InfoIcon, "Info", "MIDI In: " + inDev + "\nMIDI Out: " + outDev);
	
}

bool Gsp1101::openMidi()
{
	//printMidiDevices();
	
	if (midiOpen_M)
	{
		return true;
	}

	StringArray midiOutDevices = MidiOutput::getDevices ();
	
	MidiOutput* mo = MidiOutput::openDevice(midiOutDevices.indexOf(GSP_1101_MIDI_ID, true));
	if (!mo)
	{
		AlertWindow::showMessageBox (AlertWindow::WarningIcon, "Warning", "MIDI Output Device Not Found");
		return false;
	}
	midiOutput_M.reset(mo);

	StringArray midiInDevices = MidiInput::getDevices ();
	MidiInput* mi = MidiInput::openDevice(midiInDevices.indexOf(GSP_1101_MIDI_ID, true), this);
	if (!mi)
	{
		AlertWindow::showMessageBox (AlertWindow::WarningIcon, "Warning", "MIDI Input Device Not Found");
		return false;
	}
	midiInput_M.reset(mi);

	midiInput_M->start();

	midiOpen_M = true;
	deviceReady_M = true;
	return true;
}

Gsp1101::~Gsp1101()
{
	closeMidi();
}

void Gsp1101::closeMidi()
{
	deviceReady_M = false;
	midiOpen_M = false;
	if (midiOutput_M.get())
	{
		midiOutput_M->stopBackgroundThread();
		midiOutput_M.reset();
	}
	if (midiInput_M.get())
	{
		midiInput_M->stop();
		midiInput_M.reset();
	}
}

void Gsp1101::run()
{
	double prog = 0.0;
	AlertWindow* alertWindow;

	{
		const MessageManagerLock mml ;//(Thread::getCurrentThread());
		alertWindow = LookAndFeel::getDefaultLookAndFeel()
			.createAlertWindow ("title", String::empty, String::empty,
			String::empty, String::empty,
			AlertWindow::NoIcon, 0, 0);
		alertWindow->addProgressBarComponent (prog);
		alertWindow->setMessage ("foo");
		alertWindow->setVisible (true);
	}
	while (!threadShouldExit() && lastMidiInput_M.getSize() < 1)
	{
		wait(200);
		const MessageManagerLock mml (Thread::getCurrentThread());
		if (! mml.lockWasGained())  // if something is trying to kill this job, the lock
			return;                 // will fail, in which case we'd better return..	

		prog = (prog > 1.0) ? 0.0 : prog + 0.1;

		yield();
		//Thread::sleep(200);
	}
	const MessageManagerLock mml (Thread::getCurrentThread());
	alertWindow->setVisible (false);
}

bool Gsp1101::audition(UserCab const& userCab)
{
	//startThread();
	bool result =  sendCabData(userCab, 0x00);
	//signalThreadShouldExit();
	//notify();
	return result;
}

bool Gsp1101::store(UserCab const& userCab)
{	
	return sendCabData(userCab, 0x02);
}

bool Gsp1101::storeLast(UserCab const& userCab)
{
	bool result = sendCabData(userCab, 0x01);
	closeMidi();
	return result;
}

bool Gsp1101::sendCabData(UserCab const& userCab, unsigned char permFlag)
{	
	std::auto_ptr<MidiBuffer> midiBuffer = userCab.createOutMidiBuffer(permFlag == 0x02);

	// F0 00 00 10 00 5F 01 (procedure 73) 00 30 01 (cab index) (permanence flag) (checksum) F7
	unsigned char cabEnd[]= { 0xf0, 0x00, 0x00, 0x10, 0x00, 0x5f, 0x01, 0x73, 0x00, 0x30, 0x01, 0x00, 0x00, 0x00, 0xf7 };

	cabEnd[sizeof(cabEnd) - 4] = static_cast<unsigned char>(userCab.getSlot() - 1);
	cabEnd[sizeof(cabEnd) - 3] = permFlag;
	unsigned char checksum = 0x00;
	for (size_t i = 0; i < sizeof(cabEnd) - 3; ++i)
	{
		checksum ^= cabEnd[i + 1];
	}
	cabEnd[sizeof(cabEnd) - 2] = checksum;
	MidiMessage midiMessage (cabEnd, sizeof(cabEnd));
	midiBuffer->addEvent (midiMessage, midiBuffer->getNumEvents() + 1);

	if (openMidi())
	{
		//Logger::outputDebugString("midiBuffer size = " + String(midiBuffer->getNumEvents()));
		MidiBuffer::Iterator i (*midiBuffer);
		const uint8* data;
		int len, time, count = midiBuffer->getNumEvents();
		bool rcvOK = false;
		while (i.getNextEvent (data, len, time) && deviceReady_M)
		{			
			lastMidiInput_M.setSize(0);
			midiOutput_M->sendMessageNow(MidiMessage(data, len));

			unsigned char const testOK[]       = { 0x00, 0x00, 0x10, 0x00, 0x5f, 0x01, 0x7e, 0x00, 0x7a, 0x4a, };
	        unsigned char const testOKcabEnd[] = { 0x00, 0x00, 0x10, 0x00, 0x5f, 0x01, 0x7e, 0x00, 0x73, 0x43, };

			if (--count > 0) 
			{				
				Logger::outputDebugString("\nMidiMessage to send:" + asHex(data, 16, true) + " ...");
				rcvOK = waitForMidiInput(testOK);
			}
			else 
			{
				Logger::outputDebugString("\nMidiMessage to send:" + asHex(data, sizeof(cabEnd), true));
				rcvOK = waitForMidiInput(testOKcabEnd);
			}
			if (!rcvOK) 
			{
				break;
			}
		}
		deviceReady_M = true;
		return rcvOK;
	}
	else
	{
		AlertWindow::showMessageBox (AlertWindow::WarningIcon, "Warning", "MIDI Device Not Found");
		return false;
	}
}

void Gsp1101::handleIncomingMidiMessage(MidiInput *source, MidiMessage const& message)
{
	MemoryBlock mb (message.getRawData(), message.getRawDataSize());
	Logger::outputDebugString("\nMidiInput = " + asHex(mb));
	
	juce::uint8 const* msgBuff = message.getSysExData();
	if (!msgBuff)
	{
		lastMidiInput_M.setSize(0);
		return;
	}
	lastMidiInput_M = MemoryBlock(message.getSysExData(), message.getSysExDataSize());

	// A sysx ACK is:
	// F0 00 00 10 XX XX XX 7E 00 (procedure) (checksum) F7
	if (msgBuff[6] == 0x7e)
	{}

	// A sysx NACK is:
	// F0 00 00 10 XX XX XX 7F 00 (procedure) (err code) (checksum) F7
	else if (msgBuff[6] == 0x7f)
	{
		deviceReady_M = false;
		// NACK error codes:
		#define SYSX_INVALID_CHECKSUM          7
		#define MERR_OVERRUN                   10
		#define MIDI_PROC_FAILED               12
		switch (msgBuff[9])
		{
		case SYSX_INVALID_CHECKSUM:
		case MERR_OVERRUN:
		case MIDI_PROC_FAILED:
		default:
			break;
		}
		//Logger::outputDebugString("MidiInput error = " + String(msgBuff[9]));
	}
	else
	{}
}
