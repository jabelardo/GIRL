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

#ifndef __GIRL_USER_CAB_READER_H__
#define __GIRL_USER_CAB_READER_H__

#include "../JuceLibraryCode/JuceHeader.h"
#include <memory>

class UserCab;

class UserCabReader
{
public:
	UserCabReader(UserCab const& userCabArg);
	~UserCabReader();

	bool readIRFile ();

	MemoryBlock const& getCoefData() const;
	juce::uint32 getCoefCount() const;

private:
	UserCab const& userCab_M;
	FileInputStream fiStream_M;
	int numberChannels_M;
	juce::uint16 bytesPerSample_M;
	juce::uint32 coefCount_M;
	MemoryBlock coefData_M;
	
	bool readNumberChannels();
	bool readBytesPerSample();
	bool skipNonDataChunks();
	bool readCoefCount();
	bool readCoefData();

	UserCabReader const& operator = (UserCabReader const& userCabReader);
};


#endif // __GIRL_USER_CAB_READER_H__
