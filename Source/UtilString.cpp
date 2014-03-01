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

#include "UtilString.h"

String asHex(MemoryBlock const& msg, bool newline)
{
	size_t const msgSize = msg.getSize();

	MemoryBlock result(msgSize * 10, true);
	int offset = 0;
	for (size_t i = 0; i < msgSize; ++i)
	{	
		if (newline && ((i % 16) == 0))
		{
			result.copyFrom("\n", offset, 1);
			++offset;
		}
		char dest[100];
		sprintf(dest, "%02X ", (unsigned char)(msg[i]));
		result.copyFrom(dest, offset, strlen(dest));
		offset += strlen(dest);
	
	}	
	return result.toString();
}

String asHex(void const* msg, size_t size, bool newline)
{
	MemoryBlock mb(msg, size);
	return asHex(mb, newline);
}
