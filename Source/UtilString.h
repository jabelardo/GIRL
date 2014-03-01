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

#ifndef __GIRL_UTIL_STRING_H__
#define __GIRL_UTIL_STRING_H__

#include "../JuceLibraryCode/JuceHeader.h"

String asHex(MemoryBlock const& msg, bool newline = true);

String asHex(void const* msg, size_t size, bool newline = false);

#endif //__GIRL_UTIL_STRING_H__
