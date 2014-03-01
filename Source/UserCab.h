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

#ifndef __GIRL_USER_CAB_H__
#define __GIRL_USER_CAB_H__

#include "../JuceLibraryCode/JuceHeader.h"
#include <memory>

class UserCab
{
public:
	
	static size_t const MEM_IMAGE_SIZE;

	UserCab ();
	UserCab (UserCab const& userCab);
	UserCab (int slotArg, String const& filePathArg, String const& nameArg, bool monoLeftArg, double levelArg, bool permanentArg);

	UserCab const& operator = (UserCab const& userCab);

	int getSlot () const;
	String getFilePath () const;
	String getName () const;
	bool isMonoLeft () const;
	double getLevel () const;
	bool isPermanent () const;
	double getGain() const;

	void setSlot (int slotArg);
	void setFilePath (String const& filePathArg);
	void setName (String const& nameArg);
	void setMonoLeft (bool monoLeftArg = true);
	void setLevel (double levelArg);
	void setPermanent (bool permanentArg = true);

	std::auto_ptr<MidiBuffer> createOutMidiBuffer(bool multiple = false) const;

private:
	int slot_M;
	String filePath_M;
	String name_M;
	bool monoLeft_M;
	double level_M;
	bool permanent_M;

	std::auto_ptr<MemoryBlock> buildIRData (bool multiple) const;

	static std::auto_ptr<MemoryBlock> from8to7 (void const* srcData, int srcOffset, size_t numBytes);
};

struct UserCabComparator
{
	int compareElements (UserCab const& first, UserCab const&  second)
	{
		return first.getSlot () - second.getSlot ();
	}
};


#endif // __GIRL_USER_CAB_H__