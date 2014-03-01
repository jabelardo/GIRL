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

#ifndef __GIRL_GSP_1101_H__
#define __GIRL_GSP_1101_H__

#include "../JuceLibraryCode/JuceHeader.h"
#include <memory>

class UserCab;

class Gsp1101 : public MidiInputCallback, public Thread
{
public:
	Gsp1101();

	virtual ~Gsp1101();

	bool audition(UserCab const& userCab);

	bool store(UserCab const& userCab);

	bool storeLast(UserCab const& userCab);

	bool openMidi();

	bool testMidi ();
	
	void printMidiDevices();

	void closeMidi();

	virtual void handleIncomingMidiMessage(MidiInput *source, MidiMessage const& message);

	virtual void run();

private:
	std::auto_ptr<MidiOutput> midiOutput_M;
	std::auto_ptr<MidiInput>  midiInput_M;
	bool midiOpen_M;
	bool deviceReady_M;
	MemoryBlock lastMidiInput_M;

	bool waitForMidiInput(unsigned char const testOK[]);

	bool sendCabData(UserCab const& userCab, unsigned char permFlag);

	static String const GSP_1101_MIDI_ID;

};


#endif // __GIRL_GSP_1101_H__
