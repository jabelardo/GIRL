/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  25 Feb 2011 10:37:32am

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Jucer version: 1.12

  ------------------------------------------------------------------------------

  The Jucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-6 by Raw Material Software ltd.

  ==============================================================================
*/

#ifndef __JUCER_HEADER_GIRLMAINCOMPONENT_GIRLMAINCOMPONENT_BE4BF2F3__
#define __JUCER_HEADER_GIRLMAINCOMPONENT_GIRLMAINCOMPONENT_BE4BF2F3__

//[Headers]     -- You can add your own extra header files here --
/*
 *  Copyright (c) 2010, 2011 Jose Abelardo Gutierrez <jabelardo@gmail.com>
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
#include "ConfigDocument.h"
#include "Gsp1101.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Jucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class GirlMainComponent  : public Component,
                           public ButtonListener,
                           public SliderListener
{
public:
    //==============================================================================
    GirlMainComponent ();
    ~GirlMainComponent();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
	void selectUserCab (int slot);
	void auditionUserCab (int slot);
	bool updateSlotStatus (int slot);
	void updatePermanent (int slot);
	void updateMonoLeft (int slot);
	void updateUserCab (int slot);
	void updateEnabled ();
	void loadConfig ();
	void saveConfig ();
	void commitUserCabs ();
	void configDocumentChanged ();
	void testMidi ();
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void buttonClicked (Button* buttonThatWasClicked);
    void sliderValueChanged (Slider* sliderThatWasMoved);


    //==============================================================================
    juce_UseDebuggingNewOperator

private:
    //[UserVariables]   -- You can add your own custom variables in this section.
	class GirlMainComponentEditorListener  : public TextEditorListener
	{
	public:
		// Constructor.
		GirlMainComponentEditorListener (GirlMainComponent& girlMainComponentArg);

		// Destructor.
		virtual ~GirlMainComponentEditorListener ();

		// Called when the user changes the text in some way.
		virtual void textEditorTextChanged (TextEditor &editor);

		// Called when the user presses the return key.
		virtual void textEditorReturnKeyPressed (TextEditor &editor);

		// Called when the user presses the escape key.
		virtual void textEditorEscapeKeyPressed (TextEditor &editor);

		// Called when the text editor loses focus.
		virtual void textEditorFocusLost (TextEditor &editor);

	private:
		GirlMainComponent& girlMainComponent;

		GirlMainComponentEditorListener& operator=(GirlMainComponentEditorListener const&);

	};

	friend class GirlMainComponentEditorListener;

	class ConfigDocumentChangeListener : public ChangeListener
	{
	public:
		// Constructor.
		ConfigDocumentChangeListener (GirlMainComponent& girlMainComponentArg);

		// Destructor.
		virtual ~ConfigDocumentChangeListener ();

		// Overridden by your subclass to receive the callback.
		virtual void changeListenerCallback (ChangeBroadcaster* source);

	private:
		GirlMainComponent& girlMainComponent;

		ConfigDocumentChangeListener& operator=(ConfigDocumentChangeListener const&);
	};

	friend class ConfigDocumentChangeListener;

	GirlMainComponentEditorListener* editorListener_M;
	ConfigDocumentChangeListener* changeListener_M;
	ConfigDocument configDocument_M;
	Gsp1101 gsp1101_M;
	File initialDirectory_M;
	Array<TextEditor*> textEditorIRPaths_M;
	Array<TextEditor*> textEditorCabNames_M;
	Array<Slider*> sliderCabLevels_M;
	Array<TextButton*> textButtonAuditions_M;
	Array<ToggleButton*> toggleButtonPermanents_M;
	Array<ToggleButton*> toggleButtonMonoLefts_M;
    //[/UserVariables]

    //==============================================================================
    Label* label1;
    Label* labelIRPath1;
    Label* labelIRPath2;
    Label* labelIRPath3;
    Label* labelIRPath4;
    Label* labelIRPath5;
    Label* labelIRPath6;
    Label* labelIRPath7;
    Label* labelIRPath8;
    Label* labelIRPath9;
    Label* labelIRPath10;
    TextEditor* textEditorIRPath1;
    TextEditor* textEditorIRPath2;
    TextEditor* textEditorIRPath3;
    TextEditor* textEditorIRPath4;
    TextEditor* textEditorIRPath5;
    TextEditor* textEditorIRPath6;
    TextEditor* textEditorIRPath7;
    TextEditor* textEditorIRPath8;
    TextEditor* textEditorIRPath9;
    TextEditor* textEditorIRPath10;
    Label* label2;
    TextButton* textButtonIRPath1;
    TextButton* textButtonIRPath2;
    TextButton* textButtonIRPath3;
    TextButton* textButtonIRPath4;
    TextButton* textButtonIRPath5;
    TextButton* textButtonIRPath6;
    TextButton* textButtonIRPath7;
    TextButton* textButtonIRPath8;
    TextButton* textButtonIRPath9;
    TextButton* textButtonIRPath10;
    TextEditor* textEditorCabName1;
    Label* label3;
    TextEditor* textEditorCabName2;
    TextEditor* textEditorCabName3;
    TextEditor* textEditorCabName4;
    TextEditor* textEditorCabName5;
    TextEditor* textEditorCabName6;
    TextEditor* textEditorCabName7;
    TextEditor* textEditorCabName8;
    TextEditor* textEditorCabName9;
    TextEditor* textEditorCabName10;
    Label* label4;
    Slider* sliderCabLevel1;
    Slider* sliderCabLevel2;
    Slider* sliderCabLevel3;
    Slider* sliderCabLevel4;
    Slider* sliderCabLevel5;
    Slider* sliderCabLevel6;
    Slider* sliderCabLevel7;
    Slider* sliderCabLevel8;
    Slider* sliderCabLevel9;
    Slider* sliderCabLevel10;
    TextButton* textButtonAudition1;
    TextButton* textButtonAudition2;
    TextButton* textButtonAudition3;
    TextButton* textButtonAudition4;
    TextButton* textButtonAudition5;
    TextButton* textButtonAudition6;
    TextButton* textButtonAudition7;
    TextButton* textButtonAudition8;
    TextButton* textButtonAudition9;
    TextButton* textButtonAudition10;
    ToggleButton* toggleButtonPermanent1;
    ToggleButton* toggleButtonPermanent2;
    ToggleButton* toggleButtonPermanent3;
    ToggleButton* toggleButtonPermanent4;
    ToggleButton* toggleButtonPermanent5;
    ToggleButton* toggleButtonPermanent6;
    ToggleButton* toggleButtonPermanent7;
    ToggleButton* toggleButtonPermanent8;
    ToggleButton* toggleButtonPermanent9;
    ToggleButton* toggleButtonPermanent10;
    TextButton* textButtonLoadConfig;
    TextButton* textButtonSaveConfig;
    TextButton* textButtonCommitIRs;
    Label* label5;
    TextButton* textButtonTestMidi;
    Label* label6;
    Label* label7;
    ToggleButton* toggleButtonMonoLeft1;
    ToggleButton* toggleButtonMonoLeft2;
    ToggleButton* toggleButtonMonoLeft3;
    ToggleButton* toggleButtonMonoLeft4;
    ToggleButton* toggleButtonMonoLeft5;
    ToggleButton* toggleButtonMonoLeft6;
    ToggleButton* toggleButtonMonoLeft7;
    ToggleButton* toggleButtonMonoLeft8;
    ToggleButton* toggleButtonMonoLeft9;
    ToggleButton* toggleButtonMonoLeft10;

    //==============================================================================
    // (prevent copy constructor and operator= being generated..)
    GirlMainComponent (const GirlMainComponent&);
    const GirlMainComponent& operator= (const GirlMainComponent&);
};


#endif   // __JUCER_HEADER_GIRLMAINCOMPONENT_GIRLMAINCOMPONENT_BE4BF2F3__
