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

#include "../JuceLibraryCode/JuceHeader.h"
#include "GirlMainComponent.h"

//==============================================================================
/**
    This is the top-level window that we'll pop up. Inside it, we'll create and
    show a component from the MainComponent.cpp file (you can open this file using
    the Jucer to edit it).
*/
class GirlMainWindow  : public DocumentWindow
{
public:
    //==============================================================================
    GirlMainWindow()
        : DocumentWindow (T("GIRL - Gsp 1101 Impulse Reponse Loader"),
                          Colours::lightgrey,
                          DocumentWindow::allButtons,
                          true)
    {
        // Create an instance of our main content component, and add it
        // to our window.

        GirlMainComponent* const contentComponent = new GirlMainComponent();

        setContentComponent (contentComponent, true, true);

        centreWithSize (getWidth(), getHeight());

        setVisible (true);
    }

    ~GirlMainWindow()
    {
        // (the content component will be deleted automatically, so no need to do it here)
    }

    //==============================================================================
    void closeButtonPressed()
    {
        // When the user presses the close button, we'll tell the app to quit. This
        // window will be deleted by our HelloWorldApplication::shutdown() method
        //
        JUCEApplication::quit();
    }
};

//==============================================================================
class GIRLApplication  : public JUCEApplication
{
public:
    //==============================================================================
    GIRLApplication()
		: mainWindow (0)
    {
        // Don't do anything in this constructor! It will be called before the
        // main Juce subsystem has been initialised!
    }

    ~GIRLApplication()
    {
        // Don't do anything in this destructor! It will be called after the
        // main Juce subsystem has been shutdown and is no longer valid!
    }

	GirlMainWindow* mainWindow;

    //==============================================================================
    void initialise (const String& commandLine)
    {
        mainWindow = new GirlMainWindow ();        
    }

    void shutdown()
    {
		if (mainWindow) 
		{
			delete mainWindow;
			mainWindow = 0;
		}
        
    }

    //==============================================================================
    void systemRequestedQuit()
    {
        quit();
    }

    //==============================================================================
    const String getApplicationName()
    {
        return "GIRL - Gsp 1101 Impulse Reponse Loader";
    }

    const String getApplicationVersion()
    {
        return ProjectInfo::versionString;
    }

    bool moreThanOneInstanceAllowed()
    {
        return true;
    }

    void anotherInstanceStarted (const String& commandLine)
    {
        
    }

private:
    
};

//==============================================================================
// This macro generates the main() routine that starts the app.
START_JUCE_APPLICATION(GIRLApplication)
