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

#include "ConfigDocument.h"

ConfigDocument::ConfigDocument()
: FileBasedDocument (".girxml", "*.girxml", "openFileDialogTitle", "saveFileDialogTitle") 	
{
	for (int i = 0; i < 10; ++i) 
	{
		UserCab userCab;
		userCabs.add (userCab);
	}
}

ConfigDocument::~ConfigDocument()
{
}

String const ConfigDocument::getDocumentTitle ()
{
	return fileName;
}

String const ConfigDocument::loadDocument (File const& file)
{
    String error (TRANS("Not a valid girxml file"));

    const File girxmlFile (file.withFileExtension (T(".girxml")));
    const String girxmlFileString (girxmlFile.loadFileAsString());
    XmlDocument xmlDocument (girxmlFileString);
	XmlElement* mainElement = xmlDocument.getDocumentElement();

    if (mainElement != 0)
    {
        if (loadFromXml (*mainElement))
		{
            error = String::empty;
			fileName = file.getFileNameWithoutExtension ();
		}
        else
		{
            error = TRANS("Couldn't parse the XML section of this file correctly");
		}
        delete mainElement;
    }

    return error;
}

void ConfigDocument::setUserCab (int pos, UserCab const& userCab)
{
	userCabs.set (pos, userCab);
}

bool ConfigDocument::loadFromXml (XmlElement const& xml)
{
	if (xml.hasTagName (T("userCabs")))
    {
		userCabs.clearQuick();
        forEachXmlChildElementWithTagName (xml, e, T("cab"))
        {
			int slot = e->getIntAttribute (T("slot"));
			String filePath = e->getStringAttribute (T("filePath"));
			String name = e->getStringAttribute (T("name"));
			double level = e->getDoubleAttribute (T("level"));
			bool permanent = e->getBoolAttribute (T("permanent"));
			bool monoLeft = e->getBoolAttribute (T("monoLeft"));;
			userCabs.set (slot - 1, UserCab(slot, filePath, name, monoLeft, level, permanent));
			UserCabComparator comparator;
			userCabs.sort (comparator);
        }
        changed();
        return true;
    }
    return false;
}

String const ConfigDocument::saveDocument (File const& file)
{
    XmlElement* doc = new XmlElement (T("userCabs"));

    for (int i = 0; i < userCabs.size(); ++i)
    {
		if (userCabs[i].getSlot () > 0)
		{
			XmlElement* e = new XmlElement (T("cab"));
			doc->addChildElement (e);
			e->setAttribute (T("i"), i);
			e->setAttribute (T("slot"), userCabs[i].getSlot ());
			e->setAttribute (T("filePath"), userCabs[i].getFilePath ());
			e->setAttribute (T("name"), userCabs[i].getName ());
			e->setAttribute (T("level"), userCabs[i].getLevel ());
			e->setAttribute (T("permanent"), userCabs[i].isPermanent ());
			e->setAttribute (T("monoLeft"), userCabs[i].isMonoLeft ());
		}
    }
	String girxml = doc->createDocument (String::empty);
    delete doc;

	bool ok = file.replaceWithText (girxml, false, false);

    if (ok)
	{		
		fileName = file.getFileNameWithoutExtension ();
        return String::empty;
	}
    else
	{
        return TRANS("Couldn't write to the file.");
	}
}

File const ConfigDocument::getLastDocumentOpened ()
{
	return lastDocumentOpened;
}

void ConfigDocument::setLastDocumentOpened (File const& file)
{
    lastDocumentOpened = file;
}

Array<UserCab> ConfigDocument::getUserCabs () const
{
	return userCabs;
}
