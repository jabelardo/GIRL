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

#ifndef __GIRL_CONFIG_DOCUMENT_H__
#define __GIRL_CONFIG_DOCUMENT_H__

#include "../JuceLibraryCode/JuceHeader.h"

#include "UserCab.h"

class ConfigDocument :
	public FileBasedDocument
{
public:
	ConfigDocument ();
	virtual ~ConfigDocument ();

	Array<UserCab> getUserCabs () const;

	void setUserCab (int pos, UserCab const& userCab);

protected:

	// Overload this to return the title of the document.
	virtual String const getDocumentTitle ();
 	
	// This method should try to load your document from the given file.
	virtual String const loadDocument (File const& file);
 	
	// This method should try to write your document to the given file.
	virtual String const saveDocument (File const& file);
 	
	// This is used for dialog boxes to make them open at the last folder you were using.
	virtual File const getLastDocumentOpened ();
 	
	// This is used for dialog boxes to make them open at the last folder you were using. 
	virtual void setLastDocumentOpened (File const& file);

private:
	String fileName;
	Array<UserCab> userCabs;
	File lastDocumentOpened;

	bool loadFromXml (XmlElement const& xml);
 	
};

#endif // __GIRL_CONFIG_DOCUMENT_H__
