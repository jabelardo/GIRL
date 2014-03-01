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

//[Headers] You can add your own extra header files here...
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
//[/Headers]

#include "GirlMainComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
GirlMainComponent::GirlMainComponent ()
    : label1 (0),
      labelIRPath1 (0),
      labelIRPath2 (0),
      labelIRPath3 (0),
      labelIRPath4 (0),
      labelIRPath5 (0),
      labelIRPath6 (0),
      labelIRPath7 (0),
      labelIRPath8 (0),
      labelIRPath9 (0),
      labelIRPath10 (0),
      textEditorIRPath1 (0),
      textEditorIRPath2 (0),
      textEditorIRPath3 (0),
      textEditorIRPath4 (0),
      textEditorIRPath5 (0),
      textEditorIRPath6 (0),
      textEditorIRPath7 (0),
      textEditorIRPath8 (0),
      textEditorIRPath9 (0),
      textEditorIRPath10 (0),
      label2 (0),
      textButtonIRPath1 (0),
      textButtonIRPath2 (0),
      textButtonIRPath3 (0),
      textButtonIRPath4 (0),
      textButtonIRPath5 (0),
      textButtonIRPath6 (0),
      textButtonIRPath7 (0),
      textButtonIRPath8 (0),
      textButtonIRPath9 (0),
      textButtonIRPath10 (0),
      textEditorCabName1 (0),
      label3 (0),
      textEditorCabName2 (0),
      textEditorCabName3 (0),
      textEditorCabName4 (0),
      textEditorCabName5 (0),
      textEditorCabName6 (0),
      textEditorCabName7 (0),
      textEditorCabName8 (0),
      textEditorCabName9 (0),
      textEditorCabName10 (0),
      label4 (0),
      sliderCabLevel1 (0),
      sliderCabLevel2 (0),
      sliderCabLevel3 (0),
      sliderCabLevel4 (0),
      sliderCabLevel5 (0),
      sliderCabLevel6 (0),
      sliderCabLevel7 (0),
      sliderCabLevel8 (0),
      sliderCabLevel9 (0),
      sliderCabLevel10 (0),
      textButtonAudition1 (0),
      textButtonAudition2 (0),
      textButtonAudition3 (0),
      textButtonAudition4 (0),
      textButtonAudition5 (0),
      textButtonAudition6 (0),
      textButtonAudition7 (0),
      textButtonAudition8 (0),
      textButtonAudition9 (0),
      textButtonAudition10 (0),
      toggleButtonPermanent1 (0),
      toggleButtonPermanent2 (0),
      toggleButtonPermanent3 (0),
      toggleButtonPermanent4 (0),
      toggleButtonPermanent5 (0),
      toggleButtonPermanent6 (0),
      toggleButtonPermanent7 (0),
      toggleButtonPermanent8 (0),
      toggleButtonPermanent9 (0),
      toggleButtonPermanent10 (0),
      textButtonLoadConfig (0),
      textButtonSaveConfig (0),
      textButtonCommitIRs (0),
      label5 (0),
      textButtonTestMidi (0),
      label6 (0),
      label7 (0),
      toggleButtonMonoLeft1 (0),
      toggleButtonMonoLeft2 (0),
      toggleButtonMonoLeft3 (0),
      toggleButtonMonoLeft4 (0),
      toggleButtonMonoLeft5 (0),
      toggleButtonMonoLeft6 (0),
      toggleButtonMonoLeft7 (0),
      toggleButtonMonoLeft8 (0),
      toggleButtonMonoLeft9 (0),
      toggleButtonMonoLeft10 (0)
{
    addAndMakeVisible (label1 = new Label (String::empty,
                                           T("Cab #")));
    label1->setFont (Font (15.0000f, Font::plain));
    label1->setJustificationType (Justification::centred);
    label1->setEditable (false, false, false);
    label1->setColour (TextEditor::textColourId, Colours::black);
    label1->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (labelIRPath1 = new Label (String::empty,
                                                 T("1")));
    labelIRPath1->setFont (Font (15.0000f, Font::plain));
    labelIRPath1->setJustificationType (Justification::centred);
    labelIRPath1->setEditable (false, false, false);
    labelIRPath1->setColour (TextEditor::textColourId, Colours::black);
    labelIRPath1->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (labelIRPath2 = new Label (String::empty,
                                                 T("2")));
    labelIRPath2->setFont (Font (15.0000f, Font::plain));
    labelIRPath2->setJustificationType (Justification::centred);
    labelIRPath2->setEditable (false, false, false);
    labelIRPath2->setColour (TextEditor::textColourId, Colours::black);
    labelIRPath2->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (labelIRPath3 = new Label (String::empty,
                                                 T("3")));
    labelIRPath3->setFont (Font (15.0000f, Font::plain));
    labelIRPath3->setJustificationType (Justification::centred);
    labelIRPath3->setEditable (false, false, false);
    labelIRPath3->setColour (TextEditor::textColourId, Colours::black);
    labelIRPath3->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (labelIRPath4 = new Label (String::empty,
                                                 T("4")));
    labelIRPath4->setFont (Font (15.0000f, Font::plain));
    labelIRPath4->setJustificationType (Justification::centred);
    labelIRPath4->setEditable (false, false, false);
    labelIRPath4->setColour (TextEditor::textColourId, Colours::black);
    labelIRPath4->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (labelIRPath5 = new Label (String::empty,
                                                 T("5")));
    labelIRPath5->setFont (Font (15.0000f, Font::plain));
    labelIRPath5->setJustificationType (Justification::centred);
    labelIRPath5->setEditable (false, false, false);
    labelIRPath5->setColour (TextEditor::textColourId, Colours::black);
    labelIRPath5->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (labelIRPath6 = new Label (String::empty,
                                                 T("6")));
    labelIRPath6->setFont (Font (15.0000f, Font::plain));
    labelIRPath6->setJustificationType (Justification::centred);
    labelIRPath6->setEditable (false, false, false);
    labelIRPath6->setColour (TextEditor::textColourId, Colours::black);
    labelIRPath6->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (labelIRPath7 = new Label (String::empty,
                                                 T("7")));
    labelIRPath7->setFont (Font (15.0000f, Font::plain));
    labelIRPath7->setJustificationType (Justification::centred);
    labelIRPath7->setEditable (false, false, false);
    labelIRPath7->setColour (TextEditor::textColourId, Colours::black);
    labelIRPath7->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (labelIRPath8 = new Label (String::empty,
                                                 T("8")));
    labelIRPath8->setFont (Font (15.0000f, Font::plain));
    labelIRPath8->setJustificationType (Justification::centred);
    labelIRPath8->setEditable (false, false, false);
    labelIRPath8->setColour (TextEditor::textColourId, Colours::black);
    labelIRPath8->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (labelIRPath9 = new Label (String::empty,
                                                 T("9")));
    labelIRPath9->setFont (Font (15.0000f, Font::plain));
    labelIRPath9->setJustificationType (Justification::centred);
    labelIRPath9->setEditable (false, false, false);
    labelIRPath9->setColour (TextEditor::textColourId, Colours::black);
    labelIRPath9->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (labelIRPath10 = new Label (String::empty,
                                                  T("10")));
    labelIRPath10->setFont (Font (15.0000f, Font::plain));
    labelIRPath10->setJustificationType (Justification::centred);
    labelIRPath10->setEditable (false, false, false);
    labelIRPath10->setColour (TextEditor::textColourId, Colours::black);
    labelIRPath10->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (textEditorIRPath1 = new TextEditor (T("IRPath")));
    textEditorIRPath1->setMultiLine (false);
    textEditorIRPath1->setReturnKeyStartsNewLine (false);
    textEditorIRPath1->setReadOnly (true);
    textEditorIRPath1->setScrollbarsShown (true);
    textEditorIRPath1->setCaretVisible (true);
    textEditorIRPath1->setPopupMenuEnabled (true);
    textEditorIRPath1->setText (String::empty);

    addAndMakeVisible (textEditorIRPath2 = new TextEditor (T("IRPath")));
    textEditorIRPath2->setMultiLine (false);
    textEditorIRPath2->setReturnKeyStartsNewLine (false);
    textEditorIRPath2->setReadOnly (true);
    textEditorIRPath2->setScrollbarsShown (true);
    textEditorIRPath2->setCaretVisible (true);
    textEditorIRPath2->setPopupMenuEnabled (true);
    textEditorIRPath2->setText (String::empty);

    addAndMakeVisible (textEditorIRPath3 = new TextEditor (T("IRPath")));
    textEditorIRPath3->setMultiLine (false);
    textEditorIRPath3->setReturnKeyStartsNewLine (false);
    textEditorIRPath3->setReadOnly (true);
    textEditorIRPath3->setScrollbarsShown (true);
    textEditorIRPath3->setCaretVisible (true);
    textEditorIRPath3->setPopupMenuEnabled (true);
    textEditorIRPath3->setText (String::empty);

    addAndMakeVisible (textEditorIRPath4 = new TextEditor (T("IRPath")));
    textEditorIRPath4->setMultiLine (false);
    textEditorIRPath4->setReturnKeyStartsNewLine (false);
    textEditorIRPath4->setReadOnly (true);
    textEditorIRPath4->setScrollbarsShown (true);
    textEditorIRPath4->setCaretVisible (true);
    textEditorIRPath4->setPopupMenuEnabled (true);
    textEditorIRPath4->setText (String::empty);

    addAndMakeVisible (textEditorIRPath5 = new TextEditor (T("IRPath")));
    textEditorIRPath5->setMultiLine (false);
    textEditorIRPath5->setReturnKeyStartsNewLine (false);
    textEditorIRPath5->setReadOnly (true);
    textEditorIRPath5->setScrollbarsShown (true);
    textEditorIRPath5->setCaretVisible (true);
    textEditorIRPath5->setPopupMenuEnabled (true);
    textEditorIRPath5->setText (String::empty);

    addAndMakeVisible (textEditorIRPath6 = new TextEditor (T("IRPath")));
    textEditorIRPath6->setMultiLine (false);
    textEditorIRPath6->setReturnKeyStartsNewLine (false);
    textEditorIRPath6->setReadOnly (true);
    textEditorIRPath6->setScrollbarsShown (true);
    textEditorIRPath6->setCaretVisible (true);
    textEditorIRPath6->setPopupMenuEnabled (true);
    textEditorIRPath6->setText (String::empty);

    addAndMakeVisible (textEditorIRPath7 = new TextEditor (T("IRPath")));
    textEditorIRPath7->setMultiLine (false);
    textEditorIRPath7->setReturnKeyStartsNewLine (false);
    textEditorIRPath7->setReadOnly (true);
    textEditorIRPath7->setScrollbarsShown (true);
    textEditorIRPath7->setCaretVisible (true);
    textEditorIRPath7->setPopupMenuEnabled (true);
    textEditorIRPath7->setText (String::empty);

    addAndMakeVisible (textEditorIRPath8 = new TextEditor (T("IRPath")));
    textEditorIRPath8->setMultiLine (false);
    textEditorIRPath8->setReturnKeyStartsNewLine (false);
    textEditorIRPath8->setReadOnly (true);
    textEditorIRPath8->setScrollbarsShown (true);
    textEditorIRPath8->setCaretVisible (true);
    textEditorIRPath8->setPopupMenuEnabled (true);
    textEditorIRPath8->setText (String::empty);

    addAndMakeVisible (textEditorIRPath9 = new TextEditor (T("IRPath")));
    textEditorIRPath9->setMultiLine (false);
    textEditorIRPath9->setReturnKeyStartsNewLine (false);
    textEditorIRPath9->setReadOnly (true);
    textEditorIRPath9->setScrollbarsShown (true);
    textEditorIRPath9->setCaretVisible (true);
    textEditorIRPath9->setPopupMenuEnabled (true);
    textEditorIRPath9->setText (String::empty);

    addAndMakeVisible (textEditorIRPath10 = new TextEditor (T("IRPath")));
    textEditorIRPath10->setMultiLine (false);
    textEditorIRPath10->setReturnKeyStartsNewLine (false);
    textEditorIRPath10->setReadOnly (true);
    textEditorIRPath10->setScrollbarsShown (true);
    textEditorIRPath10->setCaretVisible (true);
    textEditorIRPath10->setPopupMenuEnabled (true);
    textEditorIRPath10->setText (String::empty);

    addAndMakeVisible (label2 = new Label (String::empty,
                                           T("Impulse Response (IR) Path")));
    label2->setFont (Font (15.0000f, Font::plain));
    label2->setJustificationType (Justification::centred);
    label2->setEditable (false, false, false);
    label2->setColour (TextEditor::textColourId, Colours::black);
    label2->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (textButtonIRPath1 = new TextButton (String::empty));
    textButtonIRPath1->setButtonText (T("Browse..."));
    textButtonIRPath1->addListener (this);

    addAndMakeVisible (textButtonIRPath2 = new TextButton (String::empty));
    textButtonIRPath2->setButtonText (T("Browse..."));
    textButtonIRPath2->addListener (this);

    addAndMakeVisible (textButtonIRPath3 = new TextButton (String::empty));
    textButtonIRPath3->setButtonText (T("Browse..."));
    textButtonIRPath3->addListener (this);

    addAndMakeVisible (textButtonIRPath4 = new TextButton (String::empty));
    textButtonIRPath4->setButtonText (T("Browse..."));
    textButtonIRPath4->addListener (this);

    addAndMakeVisible (textButtonIRPath5 = new TextButton (String::empty));
    textButtonIRPath5->setButtonText (T("Browse..."));
    textButtonIRPath5->addListener (this);

    addAndMakeVisible (textButtonIRPath6 = new TextButton (String::empty));
    textButtonIRPath6->setButtonText (T("Browse..."));
    textButtonIRPath6->addListener (this);

    addAndMakeVisible (textButtonIRPath7 = new TextButton (String::empty));
    textButtonIRPath7->setButtonText (T("Browse..."));
    textButtonIRPath7->addListener (this);

    addAndMakeVisible (textButtonIRPath8 = new TextButton (String::empty));
    textButtonIRPath8->setButtonText (T("Browse..."));
    textButtonIRPath8->addListener (this);

    addAndMakeVisible (textButtonIRPath9 = new TextButton (String::empty));
    textButtonIRPath9->setButtonText (T("Browse..."));
    textButtonIRPath9->addListener (this);

    addAndMakeVisible (textButtonIRPath10 = new TextButton (String::empty));
    textButtonIRPath10->setButtonText (T("Browse..."));
    textButtonIRPath10->addListener (this);

    addAndMakeVisible (textEditorCabName1 = new TextEditor (T("CabName")));
    textEditorCabName1->setMultiLine (false);
    textEditorCabName1->setReturnKeyStartsNewLine (false);
    textEditorCabName1->setReadOnly (false);
    textEditorCabName1->setScrollbarsShown (true);
    textEditorCabName1->setCaretVisible (true);
    textEditorCabName1->setPopupMenuEnabled (true);
    textEditorCabName1->setText (String::empty);

    addAndMakeVisible (label3 = new Label (String::empty,
                                           T("Cab Name")));
    label3->setFont (Font (15.0000f, Font::plain));
    label3->setJustificationType (Justification::centred);
    label3->setEditable (false, false, false);
    label3->setColour (TextEditor::textColourId, Colours::black);
    label3->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (textEditorCabName2 = new TextEditor (T("CabName")));
    textEditorCabName2->setMultiLine (false);
    textEditorCabName2->setReturnKeyStartsNewLine (false);
    textEditorCabName2->setReadOnly (false);
    textEditorCabName2->setScrollbarsShown (true);
    textEditorCabName2->setCaretVisible (true);
    textEditorCabName2->setPopupMenuEnabled (true);
    textEditorCabName2->setText (String::empty);

    addAndMakeVisible (textEditorCabName3 = new TextEditor (T("CabName")));
    textEditorCabName3->setMultiLine (false);
    textEditorCabName3->setReturnKeyStartsNewLine (false);
    textEditorCabName3->setReadOnly (false);
    textEditorCabName3->setScrollbarsShown (true);
    textEditorCabName3->setCaretVisible (true);
    textEditorCabName3->setPopupMenuEnabled (true);
    textEditorCabName3->setText (String::empty);

    addAndMakeVisible (textEditorCabName4 = new TextEditor (T("CabName")));
    textEditorCabName4->setMultiLine (false);
    textEditorCabName4->setReturnKeyStartsNewLine (false);
    textEditorCabName4->setReadOnly (false);
    textEditorCabName4->setScrollbarsShown (true);
    textEditorCabName4->setCaretVisible (true);
    textEditorCabName4->setPopupMenuEnabled (true);
    textEditorCabName4->setText (String::empty);

    addAndMakeVisible (textEditorCabName5 = new TextEditor (T("CabName")));
    textEditorCabName5->setMultiLine (false);
    textEditorCabName5->setReturnKeyStartsNewLine (false);
    textEditorCabName5->setReadOnly (false);
    textEditorCabName5->setScrollbarsShown (true);
    textEditorCabName5->setCaretVisible (true);
    textEditorCabName5->setPopupMenuEnabled (true);
    textEditorCabName5->setText (String::empty);

    addAndMakeVisible (textEditorCabName6 = new TextEditor (T("CabName")));
    textEditorCabName6->setMultiLine (false);
    textEditorCabName6->setReturnKeyStartsNewLine (false);
    textEditorCabName6->setReadOnly (false);
    textEditorCabName6->setScrollbarsShown (true);
    textEditorCabName6->setCaretVisible (true);
    textEditorCabName6->setPopupMenuEnabled (true);
    textEditorCabName6->setText (String::empty);

    addAndMakeVisible (textEditorCabName7 = new TextEditor (T("CabName")));
    textEditorCabName7->setMultiLine (false);
    textEditorCabName7->setReturnKeyStartsNewLine (false);
    textEditorCabName7->setReadOnly (false);
    textEditorCabName7->setScrollbarsShown (true);
    textEditorCabName7->setCaretVisible (true);
    textEditorCabName7->setPopupMenuEnabled (true);
    textEditorCabName7->setText (String::empty);

    addAndMakeVisible (textEditorCabName8 = new TextEditor (T("CabName")));
    textEditorCabName8->setMultiLine (false);
    textEditorCabName8->setReturnKeyStartsNewLine (false);
    textEditorCabName8->setReadOnly (false);
    textEditorCabName8->setScrollbarsShown (true);
    textEditorCabName8->setCaretVisible (true);
    textEditorCabName8->setPopupMenuEnabled (true);
    textEditorCabName8->setText (String::empty);

    addAndMakeVisible (textEditorCabName9 = new TextEditor (T("CabName")));
    textEditorCabName9->setMultiLine (false);
    textEditorCabName9->setReturnKeyStartsNewLine (false);
    textEditorCabName9->setReadOnly (false);
    textEditorCabName9->setScrollbarsShown (true);
    textEditorCabName9->setCaretVisible (true);
    textEditorCabName9->setPopupMenuEnabled (true);
    textEditorCabName9->setText (String::empty);

    addAndMakeVisible (textEditorCabName10 = new TextEditor (T("CabName")));
    textEditorCabName10->setMultiLine (false);
    textEditorCabName10->setReturnKeyStartsNewLine (false);
    textEditorCabName10->setReadOnly (false);
    textEditorCabName10->setScrollbarsShown (true);
    textEditorCabName10->setCaretVisible (true);
    textEditorCabName10->setPopupMenuEnabled (true);
    textEditorCabName10->setText (String::empty);

    addAndMakeVisible (label4 = new Label (String::empty,
                                           T("Cab Level (dB)")));
    label4->setFont (Font (15.0000f, Font::plain));
    label4->setJustificationType (Justification::centred);
    label4->setEditable (false, false, false);
    label4->setColour (TextEditor::textColourId, Colours::black);
    label4->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (sliderCabLevel1 = new Slider (String::empty));
    sliderCabLevel1->setRange (-24, 6, 0.5);
    sliderCabLevel1->setSliderStyle (Slider::RotaryVerticalDrag);
    sliderCabLevel1->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    sliderCabLevel1->addListener (this);

    addAndMakeVisible (sliderCabLevel2 = new Slider (String::empty));
    sliderCabLevel2->setRange (-24, 6, 0.5);
    sliderCabLevel2->setSliderStyle (Slider::RotaryVerticalDrag);
    sliderCabLevel2->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    sliderCabLevel2->addListener (this);

    addAndMakeVisible (sliderCabLevel3 = new Slider (String::empty));
    sliderCabLevel3->setRange (-24, 6, 0.5);
    sliderCabLevel3->setSliderStyle (Slider::RotaryVerticalDrag);
    sliderCabLevel3->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    sliderCabLevel3->addListener (this);

    addAndMakeVisible (sliderCabLevel4 = new Slider (String::empty));
    sliderCabLevel4->setRange (-24, 6, 0.5);
    sliderCabLevel4->setSliderStyle (Slider::RotaryVerticalDrag);
    sliderCabLevel4->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    sliderCabLevel4->addListener (this);

    addAndMakeVisible (sliderCabLevel5 = new Slider (String::empty));
    sliderCabLevel5->setRange (-24, 6, 0.5);
    sliderCabLevel5->setSliderStyle (Slider::RotaryVerticalDrag);
    sliderCabLevel5->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    sliderCabLevel5->addListener (this);

    addAndMakeVisible (sliderCabLevel6 = new Slider (String::empty));
    sliderCabLevel6->setRange (-24, 6, 0.5);
    sliderCabLevel6->setSliderStyle (Slider::RotaryVerticalDrag);
    sliderCabLevel6->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    sliderCabLevel6->addListener (this);

    addAndMakeVisible (sliderCabLevel7 = new Slider (String::empty));
    sliderCabLevel7->setRange (-24, 6, 0.5);
    sliderCabLevel7->setSliderStyle (Slider::RotaryVerticalDrag);
    sliderCabLevel7->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    sliderCabLevel7->addListener (this);

    addAndMakeVisible (sliderCabLevel8 = new Slider (String::empty));
    sliderCabLevel8->setRange (-24, 6, 0.5);
    sliderCabLevel8->setSliderStyle (Slider::RotaryVerticalDrag);
    sliderCabLevel8->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    sliderCabLevel8->addListener (this);

    addAndMakeVisible (sliderCabLevel9 = new Slider (String::empty));
    sliderCabLevel9->setRange (-24, 6, 0.5);
    sliderCabLevel9->setSliderStyle (Slider::RotaryVerticalDrag);
    sliderCabLevel9->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    sliderCabLevel9->addListener (this);

    addAndMakeVisible (sliderCabLevel10 = new Slider (String::empty));
    sliderCabLevel10->setRange (-24, 6, 0.5);
    sliderCabLevel10->setSliderStyle (Slider::RotaryVerticalDrag);
    sliderCabLevel10->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    sliderCabLevel10->addListener (this);

    addAndMakeVisible (textButtonAudition1 = new TextButton (String::empty));
    textButtonAudition1->setButtonText (T("Audition"));
    textButtonAudition1->addListener (this);

    addAndMakeVisible (textButtonAudition2 = new TextButton (String::empty));
    textButtonAudition2->setButtonText (T("Audition"));
    textButtonAudition2->addListener (this);

    addAndMakeVisible (textButtonAudition3 = new TextButton (String::empty));
    textButtonAudition3->setButtonText (T("Audition"));
    textButtonAudition3->addListener (this);

    addAndMakeVisible (textButtonAudition4 = new TextButton (String::empty));
    textButtonAudition4->setButtonText (T("Audition"));
    textButtonAudition4->addListener (this);

    addAndMakeVisible (textButtonAudition5 = new TextButton (String::empty));
    textButtonAudition5->setButtonText (T("Audition"));
    textButtonAudition5->addListener (this);

    addAndMakeVisible (textButtonAudition6 = new TextButton (String::empty));
    textButtonAudition6->setButtonText (T("Audition"));
    textButtonAudition6->addListener (this);

    addAndMakeVisible (textButtonAudition7 = new TextButton (String::empty));
    textButtonAudition7->setButtonText (T("Audition"));
    textButtonAudition7->addListener (this);

    addAndMakeVisible (textButtonAudition8 = new TextButton (String::empty));
    textButtonAudition8->setButtonText (T("Audition"));
    textButtonAudition8->addListener (this);

    addAndMakeVisible (textButtonAudition9 = new TextButton (String::empty));
    textButtonAudition9->setButtonText (T("Audition"));
    textButtonAudition9->addListener (this);

    addAndMakeVisible (textButtonAudition10 = new TextButton (String::empty));
    textButtonAudition10->setButtonText (T("Audition"));
    textButtonAudition10->addListener (this);

    addAndMakeVisible (toggleButtonPermanent1 = new ToggleButton (String::empty));
    toggleButtonPermanent1->addListener (this);

    addAndMakeVisible (toggleButtonPermanent2 = new ToggleButton (String::empty));
    toggleButtonPermanent2->addListener (this);

    addAndMakeVisible (toggleButtonPermanent3 = new ToggleButton (String::empty));
    toggleButtonPermanent3->addListener (this);

    addAndMakeVisible (toggleButtonPermanent4 = new ToggleButton (String::empty));
    toggleButtonPermanent4->addListener (this);

    addAndMakeVisible (toggleButtonPermanent5 = new ToggleButton (String::empty));
    toggleButtonPermanent5->addListener (this);

    addAndMakeVisible (toggleButtonPermanent6 = new ToggleButton (String::empty));
    toggleButtonPermanent6->addListener (this);

    addAndMakeVisible (toggleButtonPermanent7 = new ToggleButton (String::empty));
    toggleButtonPermanent7->addListener (this);

    addAndMakeVisible (toggleButtonPermanent8 = new ToggleButton (String::empty));
    toggleButtonPermanent8->addListener (this);

    addAndMakeVisible (toggleButtonPermanent9 = new ToggleButton (String::empty));
    toggleButtonPermanent9->addListener (this);

    addAndMakeVisible (toggleButtonPermanent10 = new ToggleButton (String::empty));
    toggleButtonPermanent10->addListener (this);

    addAndMakeVisible (textButtonLoadConfig = new TextButton (String::empty));
    textButtonLoadConfig->setButtonText (T("Load Configuration..."));
    textButtonLoadConfig->addListener (this);

    addAndMakeVisible (textButtonSaveConfig = new TextButton (String::empty));
    textButtonSaveConfig->setButtonText (T("Save Configuration..."));
    textButtonSaveConfig->addListener (this);

    addAndMakeVisible (textButtonCommitIRs = new TextButton (String::empty));
    textButtonCommitIRs->setButtonText (T("Commit Selected IRs..."));
    textButtonCommitIRs->addListener (this);

    addAndMakeVisible (label5 = new Label (String::empty,
                                           T("GIRL\nGsp 1101 Impulse Reponse Loader\nv1 - alpha 110224.0\n\xa9 2010, 2011 jabelardo\nDistribuited under GPL v2")));
    label5->setFont (Font (15.0000f, Font::plain));
    label5->setJustificationType (Justification::topLeft);
    label5->setEditable (false, false, false);
    label5->setColour (Label::backgroundColourId, Colour (0x8cffffff));
    label5->setColour (TextEditor::textColourId, Colours::black);
    label5->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (textButtonTestMidi = new TextButton (String::empty));
    textButtonTestMidi->setButtonText (T("Test Midi..."));
    textButtonTestMidi->addListener (this);

    addAndMakeVisible (label6 = new Label (String::empty,
                                           T("Perm")));
    label6->setFont (Font (15.0000f, Font::plain));
    label6->setJustificationType (Justification::centredRight);
    label6->setEditable (false, false, false);
    label6->setColour (TextEditor::textColourId, Colours::black);
    label6->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (label7 = new Label (String::empty,
                                           T("Mono\nLeft")));
    label7->setFont (Font (15.0000f, Font::plain));
    label7->setJustificationType (Justification::centred);
    label7->setEditable (false, false, false);
    label7->setColour (TextEditor::textColourId, Colours::black);
    label7->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (toggleButtonMonoLeft1 = new ToggleButton (String::empty));
    toggleButtonMonoLeft1->addListener (this);

    addAndMakeVisible (toggleButtonMonoLeft2 = new ToggleButton (String::empty));
    toggleButtonMonoLeft2->addListener (this);

    addAndMakeVisible (toggleButtonMonoLeft3 = new ToggleButton (String::empty));
    toggleButtonMonoLeft3->addListener (this);

    addAndMakeVisible (toggleButtonMonoLeft4 = new ToggleButton (String::empty));
    toggleButtonMonoLeft4->addListener (this);

    addAndMakeVisible (toggleButtonMonoLeft5 = new ToggleButton (String::empty));
    toggleButtonMonoLeft5->addListener (this);

    addAndMakeVisible (toggleButtonMonoLeft6 = new ToggleButton (String::empty));
    toggleButtonMonoLeft6->addListener (this);

    addAndMakeVisible (toggleButtonMonoLeft7 = new ToggleButton (String::empty));
    toggleButtonMonoLeft7->addListener (this);

    addAndMakeVisible (toggleButtonMonoLeft8 = new ToggleButton (String::empty));
    toggleButtonMonoLeft8->addListener (this);

    addAndMakeVisible (toggleButtonMonoLeft9 = new ToggleButton (String::empty));
    toggleButtonMonoLeft9->addListener (this);

    addAndMakeVisible (toggleButtonMonoLeft10 = new ToggleButton (String::empty));
    toggleButtonMonoLeft10->addListener (this);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (800, 480);

    //[Constructor] You can add your own custom stuff here..
	textEditorIRPaths_M.add (textEditorIRPath1);
	textEditorIRPaths_M.add (textEditorIRPath2);
	textEditorIRPaths_M.add (textEditorIRPath3);
	textEditorIRPaths_M.add (textEditorIRPath4);
	textEditorIRPaths_M.add (textEditorIRPath5);
	textEditorIRPaths_M.add (textEditorIRPath6);
	textEditorIRPaths_M.add (textEditorIRPath7);
	textEditorIRPaths_M.add (textEditorIRPath8);
	textEditorIRPaths_M.add (textEditorIRPath9);
	textEditorIRPaths_M.add (textEditorIRPath10);

	textEditorCabNames_M.add (textEditorCabName1);
	textEditorCabNames_M.add (textEditorCabName2);
	textEditorCabNames_M.add (textEditorCabName3);
	textEditorCabNames_M.add (textEditorCabName4);
	textEditorCabNames_M.add (textEditorCabName5);
	textEditorCabNames_M.add (textEditorCabName6);
	textEditorCabNames_M.add (textEditorCabName7);
	textEditorCabNames_M.add (textEditorCabName8);
	textEditorCabNames_M.add (textEditorCabName9);
	textEditorCabNames_M.add (textEditorCabName10);

	sliderCabLevels_M.add (sliderCabLevel1);
	sliderCabLevels_M.add (sliderCabLevel2);
	sliderCabLevels_M.add (sliderCabLevel3);
	sliderCabLevels_M.add (sliderCabLevel4);
	sliderCabLevels_M.add (sliderCabLevel5);
	sliderCabLevels_M.add (sliderCabLevel6);
	sliderCabLevels_M.add (sliderCabLevel7);
	sliderCabLevels_M.add (sliderCabLevel8);
	sliderCabLevels_M.add (sliderCabLevel9);
	sliderCabLevels_M.add (sliderCabLevel10);

	textButtonAuditions_M.add (textButtonAudition1);
	textButtonAuditions_M.add (textButtonAudition2);
	textButtonAuditions_M.add (textButtonAudition3);
	textButtonAuditions_M.add (textButtonAudition4);
	textButtonAuditions_M.add (textButtonAudition5);
	textButtonAuditions_M.add (textButtonAudition6);
	textButtonAuditions_M.add (textButtonAudition7);
	textButtonAuditions_M.add (textButtonAudition8);
	textButtonAuditions_M.add (textButtonAudition9);
	textButtonAuditions_M.add (textButtonAudition10);

	toggleButtonPermanents_M.add (toggleButtonPermanent1);
	toggleButtonPermanents_M.add (toggleButtonPermanent2);
	toggleButtonPermanents_M.add (toggleButtonPermanent3);
	toggleButtonPermanents_M.add (toggleButtonPermanent4);
	toggleButtonPermanents_M.add (toggleButtonPermanent5);
	toggleButtonPermanents_M.add (toggleButtonPermanent6);
	toggleButtonPermanents_M.add (toggleButtonPermanent7);
	toggleButtonPermanents_M.add (toggleButtonPermanent8);
	toggleButtonPermanents_M.add (toggleButtonPermanent9);
	toggleButtonPermanents_M.add (toggleButtonPermanent10);

	toggleButtonMonoLefts_M.add (toggleButtonMonoLeft1);
	toggleButtonMonoLefts_M.add (toggleButtonMonoLeft2);
	toggleButtonMonoLefts_M.add (toggleButtonMonoLeft3);
	toggleButtonMonoLefts_M.add (toggleButtonMonoLeft4);
	toggleButtonMonoLefts_M.add (toggleButtonMonoLeft5);
	toggleButtonMonoLefts_M.add (toggleButtonMonoLeft6);
	toggleButtonMonoLefts_M.add (toggleButtonMonoLeft7);
	toggleButtonMonoLefts_M.add (toggleButtonMonoLeft8);
	toggleButtonMonoLefts_M.add (toggleButtonMonoLeft9);
	toggleButtonMonoLefts_M.add (toggleButtonMonoLeft10);

	updateEnabled ();
	editorListener_M = new GirlMainComponentEditorListener (*this);
	changeListener_M = new ConfigDocumentChangeListener (*this);
    //[/Constructor]
}

GirlMainComponent::~GirlMainComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
	deleteAndZero (editorListener_M);
	deleteAndZero (changeListener_M);
    //[/Destructor_pre]

    deleteAndZero (label1);
    deleteAndZero (labelIRPath1);
    deleteAndZero (labelIRPath2);
    deleteAndZero (labelIRPath3);
    deleteAndZero (labelIRPath4);
    deleteAndZero (labelIRPath5);
    deleteAndZero (labelIRPath6);
    deleteAndZero (labelIRPath7);
    deleteAndZero (labelIRPath8);
    deleteAndZero (labelIRPath9);
    deleteAndZero (labelIRPath10);
    deleteAndZero (textEditorIRPath1);
    deleteAndZero (textEditorIRPath2);
    deleteAndZero (textEditorIRPath3);
    deleteAndZero (textEditorIRPath4);
    deleteAndZero (textEditorIRPath5);
    deleteAndZero (textEditorIRPath6);
    deleteAndZero (textEditorIRPath7);
    deleteAndZero (textEditorIRPath8);
    deleteAndZero (textEditorIRPath9);
    deleteAndZero (textEditorIRPath10);
    deleteAndZero (label2);
    deleteAndZero (textButtonIRPath1);
    deleteAndZero (textButtonIRPath2);
    deleteAndZero (textButtonIRPath3);
    deleteAndZero (textButtonIRPath4);
    deleteAndZero (textButtonIRPath5);
    deleteAndZero (textButtonIRPath6);
    deleteAndZero (textButtonIRPath7);
    deleteAndZero (textButtonIRPath8);
    deleteAndZero (textButtonIRPath9);
    deleteAndZero (textButtonIRPath10);
    deleteAndZero (textEditorCabName1);
    deleteAndZero (label3);
    deleteAndZero (textEditorCabName2);
    deleteAndZero (textEditorCabName3);
    deleteAndZero (textEditorCabName4);
    deleteAndZero (textEditorCabName5);
    deleteAndZero (textEditorCabName6);
    deleteAndZero (textEditorCabName7);
    deleteAndZero (textEditorCabName8);
    deleteAndZero (textEditorCabName9);
    deleteAndZero (textEditorCabName10);
    deleteAndZero (label4);
    deleteAndZero (sliderCabLevel1);
    deleteAndZero (sliderCabLevel2);
    deleteAndZero (sliderCabLevel3);
    deleteAndZero (sliderCabLevel4);
    deleteAndZero (sliderCabLevel5);
    deleteAndZero (sliderCabLevel6);
    deleteAndZero (sliderCabLevel7);
    deleteAndZero (sliderCabLevel8);
    deleteAndZero (sliderCabLevel9);
    deleteAndZero (sliderCabLevel10);
    deleteAndZero (textButtonAudition1);
    deleteAndZero (textButtonAudition2);
    deleteAndZero (textButtonAudition3);
    deleteAndZero (textButtonAudition4);
    deleteAndZero (textButtonAudition5);
    deleteAndZero (textButtonAudition6);
    deleteAndZero (textButtonAudition7);
    deleteAndZero (textButtonAudition8);
    deleteAndZero (textButtonAudition9);
    deleteAndZero (textButtonAudition10);
    deleteAndZero (toggleButtonPermanent1);
    deleteAndZero (toggleButtonPermanent2);
    deleteAndZero (toggleButtonPermanent3);
    deleteAndZero (toggleButtonPermanent4);
    deleteAndZero (toggleButtonPermanent5);
    deleteAndZero (toggleButtonPermanent6);
    deleteAndZero (toggleButtonPermanent7);
    deleteAndZero (toggleButtonPermanent8);
    deleteAndZero (toggleButtonPermanent9);
    deleteAndZero (toggleButtonPermanent10);
    deleteAndZero (textButtonLoadConfig);
    deleteAndZero (textButtonSaveConfig);
    deleteAndZero (textButtonCommitIRs);
    deleteAndZero (label5);
    deleteAndZero (textButtonTestMidi);
    deleteAndZero (label6);
    deleteAndZero (label7);
    deleteAndZero (toggleButtonMonoLeft1);
    deleteAndZero (toggleButtonMonoLeft2);
    deleteAndZero (toggleButtonMonoLeft3);
    deleteAndZero (toggleButtonMonoLeft4);
    deleteAndZero (toggleButtonMonoLeft5);
    deleteAndZero (toggleButtonMonoLeft6);
    deleteAndZero (toggleButtonMonoLeft7);
    deleteAndZero (toggleButtonMonoLeft8);
    deleteAndZero (toggleButtonMonoLeft9);
    deleteAndZero (toggleButtonMonoLeft10);

    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void GirlMainComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xffdfdceb));

    g.setColour (Colour (0xffcdc5f1));
    g.fillRoundedRectangle (752.0f, 32.0f, 44.0f, 388.0f, 10.0000f);

    g.setColour (Colour (0xffcdc5f1));
    g.fillRoundedRectangle (624.0f, 364.0f, 171.0f, 56.0f, 10.0000f);

    g.setColour (Colour (0xffcdc5f1));
    g.fillRoundedRectangle (3.0f, 364.0f, 264.0f, 112.0f, 10.0000f);

    g.setColour (Colour (0xffcdc5f1));
    g.fillRoundedRectangle (292.0f, 364.0f, 312.0f, 56.0f, 10.0000f);

    g.setColour (Colour (0xffcdc5f1));
    g.fillRoundedRectangle (624.0f, 428.0f, 171.0f, 48.0f, 10.0000f);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void GirlMainComponent::resized()
{
    label1->setBounds (4, 4, 48, 24);
    labelIRPath1->setBounds (4, 36, 48, 24);
    labelIRPath2->setBounds (4, 68, 48, 24);
    labelIRPath3->setBounds (4, 100, 48, 24);
    labelIRPath4->setBounds (4, 132, 48, 24);
    labelIRPath5->setBounds (4, 164, 48, 24);
    labelIRPath6->setBounds (4, 196, 48, 24);
    labelIRPath7->setBounds (4, 228, 48, 24);
    labelIRPath8->setBounds (4, 260, 48, 24);
    labelIRPath9->setBounds (4, 292, 48, 24);
    labelIRPath10->setBounds (4, 324, 48, 24);
    textEditorIRPath1->setBounds (60, 36, 256, 24);
    textEditorIRPath2->setBounds (60, 68, 256, 24);
    textEditorIRPath3->setBounds (60, 100, 256, 24);
    textEditorIRPath4->setBounds (60, 132, 256, 24);
    textEditorIRPath5->setBounds (60, 164, 256, 24);
    textEditorIRPath6->setBounds (60, 196, 256, 24);
    textEditorIRPath7->setBounds (60, 228, 256, 24);
    textEditorIRPath8->setBounds (60, 260, 256, 24);
    textEditorIRPath9->setBounds (60, 292, 256, 24);
    textEditorIRPath10->setBounds (60, 324, 256, 24);
    label2->setBounds (60, 4, 256, 24);
    textButtonIRPath1->setBounds (324, 36, 72, 24);
    textButtonIRPath2->setBounds (324, 68, 72, 24);
    textButtonIRPath3->setBounds (324, 100, 72, 24);
    textButtonIRPath4->setBounds (324, 132, 72, 24);
    textButtonIRPath5->setBounds (324, 164, 72, 24);
    textButtonIRPath6->setBounds (324, 196, 72, 24);
    textButtonIRPath7->setBounds (324, 228, 72, 24);
    textButtonIRPath8->setBounds (324, 260, 72, 24);
    textButtonIRPath9->setBounds (324, 292, 72, 24);
    textButtonIRPath10->setBounds (324, 324, 72, 24);
    textEditorCabName1->setBounds (404, 36, 104, 24);
    label3->setBounds (404, 4, 104, 24);
    textEditorCabName2->setBounds (404, 68, 104, 24);
    textEditorCabName3->setBounds (404, 100, 104, 24);
    textEditorCabName4->setBounds (404, 132, 104, 24);
    textEditorCabName5->setBounds (404, 164, 104, 24);
    textEditorCabName6->setBounds (404, 196, 104, 24);
    textEditorCabName7->setBounds (404, 228, 104, 24);
    textEditorCabName8->setBounds (404, 260, 104, 24);
    textEditorCabName9->setBounds (404, 292, 104, 24);
    textEditorCabName10->setBounds (404, 324, 104, 24);
    label4->setBounds (516, 4, 104, 24);
    sliderCabLevel1->setBounds (516, 36, 104, 24);
    sliderCabLevel2->setBounds (516, 68, 104, 24);
    sliderCabLevel3->setBounds (516, 100, 104, 24);
    sliderCabLevel4->setBounds (516, 132, 104, 24);
    sliderCabLevel5->setBounds (516, 164, 104, 24);
    sliderCabLevel6->setBounds (516, 196, 104, 24);
    sliderCabLevel7->setBounds (516, 228, 104, 24);
    sliderCabLevel8->setBounds (516, 260, 104, 24);
    sliderCabLevel9->setBounds (516, 292, 104, 24);
    sliderCabLevel10->setBounds (516, 324, 104, 24);
    textButtonAudition1->setBounds (680, 36, 64, 24);
    textButtonAudition2->setBounds (680, 68, 64, 24);
    textButtonAudition3->setBounds (680, 100, 64, 24);
    textButtonAudition4->setBounds (680, 132, 64, 24);
    textButtonAudition5->setBounds (680, 164, 64, 24);
    textButtonAudition6->setBounds (680, 196, 64, 24);
    textButtonAudition7->setBounds (680, 228, 64, 24);
    textButtonAudition8->setBounds (680, 260, 64, 24);
    textButtonAudition9->setBounds (680, 292, 64, 24);
    textButtonAudition10->setBounds (680, 324, 64, 24);
    toggleButtonPermanent1->setBounds (764, 36, 24, 24);
    toggleButtonPermanent2->setBounds (764, 68, 24, 24);
    toggleButtonPermanent3->setBounds (764, 100, 24, 24);
    toggleButtonPermanent4->setBounds (764, 132, 24, 24);
    toggleButtonPermanent5->setBounds (764, 164, 24, 24);
    toggleButtonPermanent6->setBounds (764, 196, 24, 24);
    toggleButtonPermanent7->setBounds (764, 228, 24, 24);
    toggleButtonPermanent8->setBounds (764, 260, 24, 24);
    toggleButtonPermanent9->setBounds (764, 292, 24, 24);
    toggleButtonPermanent10->setBounds (764, 324, 24, 24);
    textButtonLoadConfig->setBounds (300, 380, 144, 24);
    textButtonSaveConfig->setBounds (452, 380, 144, 24);
    textButtonCommitIRs->setBounds (632, 380, 156, 24);
    label5->setBounds (20, 380, 228, 84);
    textButtonTestMidi->setBounds (632, 440, 156, 24);
    label6->setBounds (752, 4, 44, 24);
    label7->setBounds (624, 4, 52, 24);
    toggleButtonMonoLeft1->setBounds (636, 36, 24, 24);
    toggleButtonMonoLeft2->setBounds (636, 68, 24, 24);
    toggleButtonMonoLeft3->setBounds (636, 100, 24, 24);
    toggleButtonMonoLeft4->setBounds (636, 132, 24, 24);
    toggleButtonMonoLeft5->setBounds (636, 164, 24, 24);
    toggleButtonMonoLeft6->setBounds (636, 196, 24, 24);
    toggleButtonMonoLeft7->setBounds (636, 224, 24, 24);
    toggleButtonMonoLeft8->setBounds (636, 256, 24, 24);
    toggleButtonMonoLeft9->setBounds (636, 288, 24, 24);
    toggleButtonMonoLeft10->setBounds (636, 320, 24, 24);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void GirlMainComponent::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == textButtonIRPath1)
    {
        //[UserButtonCode_textButtonIRPath1] -- add your button handler code here..
		selectUserCab(1);
        //[/UserButtonCode_textButtonIRPath1]
    }
    else if (buttonThatWasClicked == textButtonIRPath2)
    {
        //[UserButtonCode_textButtonIRPath2] -- add your button handler code here..
		selectUserCab(2);
        //[/UserButtonCode_textButtonIRPath2]
    }
    else if (buttonThatWasClicked == textButtonIRPath3)
    {
        //[UserButtonCode_textButtonIRPath3] -- add your button handler code here..
		selectUserCab(3);
        //[/UserButtonCode_textButtonIRPath3]
    }
    else if (buttonThatWasClicked == textButtonIRPath4)
    {
        //[UserButtonCode_textButtonIRPath4] -- add your button handler code here..
		selectUserCab(4);
        //[/UserButtonCode_textButtonIRPath4]
    }
    else if (buttonThatWasClicked == textButtonIRPath5)
    {
        //[UserButtonCode_textButtonIRPath5] -- add your button handler code here..
		selectUserCab(5);
        //[/UserButtonCode_textButtonIRPath5]
    }
    else if (buttonThatWasClicked == textButtonIRPath6)
    {
        //[UserButtonCode_textButtonIRPath6] -- add your button handler code here..
		selectUserCab(6);
        //[/UserButtonCode_textButtonIRPath6]
    }
    else if (buttonThatWasClicked == textButtonIRPath7)
    {
        //[UserButtonCode_textButtonIRPath7] -- add your button handler code here..
		selectUserCab(7);
        //[/UserButtonCode_textButtonIRPath7]
    }
    else if (buttonThatWasClicked == textButtonIRPath8)
    {
        //[UserButtonCode_textButtonIRPath8] -- add your button handler code here..
		selectUserCab(8);
        //[/UserButtonCode_textButtonIRPath8]
    }
    else if (buttonThatWasClicked == textButtonIRPath9)
    {
        //[UserButtonCode_textButtonIRPath9] -- add your button handler code here..
		selectUserCab(9);
        //[/UserButtonCode_textButtonIRPath9]
    }
    else if (buttonThatWasClicked == textButtonIRPath10)
    {
        //[UserButtonCode_textButtonIRPath10] -- add your button handler code here..
		selectUserCab(10);
        //[/UserButtonCode_textButtonIRPath10]
    }
    else if (buttonThatWasClicked == textButtonAudition1)
    {
        //[UserButtonCode_textButtonAudition1] -- add your button handler code here..
		auditionUserCab(1);
        //[/UserButtonCode_textButtonAudition1]
    }
    else if (buttonThatWasClicked == textButtonAudition2)
    {
        //[UserButtonCode_textButtonAudition2] -- add your button handler code here..
		auditionUserCab(2);
        //[/UserButtonCode_textButtonAudition2]
    }
    else if (buttonThatWasClicked == textButtonAudition3)
    {
        //[UserButtonCode_textButtonAudition3] -- add your button handler code here..
		auditionUserCab(3);
        //[/UserButtonCode_textButtonAudition3]
    }
    else if (buttonThatWasClicked == textButtonAudition4)
    {
        //[UserButtonCode_textButtonAudition4] -- add your button handler code here..
		auditionUserCab(4);
        //[/UserButtonCode_textButtonAudition4]
    }
    else if (buttonThatWasClicked == textButtonAudition5)
    {
        //[UserButtonCode_textButtonAudition5] -- add your button handler code here..
		auditionUserCab(5);
        //[/UserButtonCode_textButtonAudition5]
    }
    else if (buttonThatWasClicked == textButtonAudition6)
    {
        //[UserButtonCode_textButtonAudition6] -- add your button handler code here..
		auditionUserCab(6);
        //[/UserButtonCode_textButtonAudition6]
    }
    else if (buttonThatWasClicked == textButtonAudition7)
    {
        //[UserButtonCode_textButtonAudition7] -- add your button handler code here..
		auditionUserCab(7);
        //[/UserButtonCode_textButtonAudition7]
    }
    else if (buttonThatWasClicked == textButtonAudition8)
    {
        //[UserButtonCode_textButtonAudition8] -- add your button handler code here..
		auditionUserCab(8);
        //[/UserButtonCode_textButtonAudition8]
    }
    else if (buttonThatWasClicked == textButtonAudition9)
    {
        //[UserButtonCode_textButtonAudition9] -- add your button handler code here..
		auditionUserCab(9);
        //[/UserButtonCode_textButtonAudition9]
    }
    else if (buttonThatWasClicked == textButtonAudition10)
    {
        //[UserButtonCode_textButtonAudition10] -- add your button handler code here..
		auditionUserCab(10);
        //[/UserButtonCode_textButtonAudition10]
    }
    else if (buttonThatWasClicked == toggleButtonPermanent1)
    {
        //[UserButtonCode_toggleButtonPermanent1] -- add your button handler code here..
		updatePermanent (1);
        //[/UserButtonCode_toggleButtonPermanent1]
    }
    else if (buttonThatWasClicked == toggleButtonPermanent2)
    {
        //[UserButtonCode_toggleButtonPermanent2] -- add your button handler code here..
		updatePermanent (2);
        //[/UserButtonCode_toggleButtonPermanent2]
    }
    else if (buttonThatWasClicked == toggleButtonPermanent3)
    {
        //[UserButtonCode_toggleButtonPermanent3] -- add your button handler code here..
		updatePermanent (3);
        //[/UserButtonCode_toggleButtonPermanent3]
    }
    else if (buttonThatWasClicked == toggleButtonPermanent4)
    {
        //[UserButtonCode_toggleButtonPermanent4] -- add your button handler code here..
		updatePermanent (4);
        //[/UserButtonCode_toggleButtonPermanent4]
    }
    else if (buttonThatWasClicked == toggleButtonPermanent5)
    {
        //[UserButtonCode_toggleButtonPermanent5] -- add your button handler code here..
		updatePermanent (5);
        //[/UserButtonCode_toggleButtonPermanent5]
    }
    else if (buttonThatWasClicked == toggleButtonPermanent6)
    {
        //[UserButtonCode_toggleButtonPermanent6] -- add your button handler code here..
		updatePermanent (6);
        //[/UserButtonCode_toggleButtonPermanent6]
    }
    else if (buttonThatWasClicked == toggleButtonPermanent7)
    {
        //[UserButtonCode_toggleButtonPermanent7] -- add your button handler code here..
		updatePermanent (7);
        //[/UserButtonCode_toggleButtonPermanent7]
    }
    else if (buttonThatWasClicked == toggleButtonPermanent8)
    {
        //[UserButtonCode_toggleButtonPermanent8] -- add your button handler code here..
		updatePermanent (8);
        //[/UserButtonCode_toggleButtonPermanent8]
    }
    else if (buttonThatWasClicked == toggleButtonPermanent9)
    {
        //[UserButtonCode_toggleButtonPermanent9] -- add your button handler code here..
		updatePermanent (9);
        //[/UserButtonCode_toggleButtonPermanent9]
    }
    else if (buttonThatWasClicked == toggleButtonPermanent10)
    {
        //[UserButtonCode_toggleButtonPermanent10] -- add your button handler code here..
		updatePermanent (10);
        //[/UserButtonCode_toggleButtonPermanent10]
    }
    else if (buttonThatWasClicked == textButtonLoadConfig)
    {
        //[UserButtonCode_textButtonLoadConfig] -- add your button handler code here..
		loadConfig ();
        //[/UserButtonCode_textButtonLoadConfig]
    }
    else if (buttonThatWasClicked == textButtonSaveConfig)
    {
        //[UserButtonCode_textButtonSaveConfig] -- add your button handler code here..
		saveConfig ();
        //[/UserButtonCode_textButtonSaveConfig]
    }
    else if (buttonThatWasClicked == textButtonCommitIRs)
    {
        //[UserButtonCode_textButtonCommitIRs] -- add your button handler code here..
		commitUserCabs ();
        //[/UserButtonCode_textButtonCommitIRs]
    }
    else if (buttonThatWasClicked == textButtonTestMidi)
    {
        //[UserButtonCode_textButtonTestMidi] -- add your button handler code here..
		testMidi ();
        //[/UserButtonCode_textButtonTestMidi]
    }
    else if (buttonThatWasClicked == toggleButtonMonoLeft1)
    {
        //[UserButtonCode_toggleButtonMonoLeft1] -- add your button handler code here..
		updateMonoLeft (1);
        //[/UserButtonCode_toggleButtonMonoLeft1]
    }
    else if (buttonThatWasClicked == toggleButtonMonoLeft2)
    {
        //[UserButtonCode_toggleButtonMonoLeft2] -- add your button handler code here..
		updateMonoLeft (2);
        //[/UserButtonCode_toggleButtonMonoLeft2]
    }
    else if (buttonThatWasClicked == toggleButtonMonoLeft3)
    {
        //[UserButtonCode_toggleButtonMonoLeft3] -- add your button handler code here..
		updateMonoLeft (3);
        //[/UserButtonCode_toggleButtonMonoLeft3]
    }
    else if (buttonThatWasClicked == toggleButtonMonoLeft4)
    {
        //[UserButtonCode_toggleButtonMonoLeft4] -- add your button handler code here..
		updateMonoLeft (4);
        //[/UserButtonCode_toggleButtonMonoLeft4]
    }
    else if (buttonThatWasClicked == toggleButtonMonoLeft5)
    {
        //[UserButtonCode_toggleButtonMonoLeft5] -- add your button handler code here..
		updateMonoLeft (5);
        //[/UserButtonCode_toggleButtonMonoLeft5]
    }
    else if (buttonThatWasClicked == toggleButtonMonoLeft6)
    {
        //[UserButtonCode_toggleButtonMonoLeft6] -- add your button handler code here..
		updateMonoLeft (6);
        //[/UserButtonCode_toggleButtonMonoLeft6]
    }
    else if (buttonThatWasClicked == toggleButtonMonoLeft7)
    {
        //[UserButtonCode_toggleButtonMonoLeft7] -- add your button handler code here..
		updateMonoLeft (7);
        //[/UserButtonCode_toggleButtonMonoLeft7]
    }
    else if (buttonThatWasClicked == toggleButtonMonoLeft8)
    {
        //[UserButtonCode_toggleButtonMonoLeft8] -- add your button handler code here..
		updateMonoLeft (8);
        //[/UserButtonCode_toggleButtonMonoLeft8]
    }
    else if (buttonThatWasClicked == toggleButtonMonoLeft9)
    {
        //[UserButtonCode_toggleButtonMonoLeft9] -- add your button handler code here..
		updateMonoLeft (9);
        //[/UserButtonCode_toggleButtonMonoLeft9]
    }
    else if (buttonThatWasClicked == toggleButtonMonoLeft10)
    {
        //[UserButtonCode_toggleButtonMonoLeft10] -- add your button handler code here..
		updateMonoLeft (10);
        //[/UserButtonCode_toggleButtonMonoLeft10]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}

void GirlMainComponent::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == sliderCabLevel1)
    {
        //[UserSliderCode_sliderCabLevel1] -- add your slider handling code here..
		updateUserCab (1);
        //[/UserSliderCode_sliderCabLevel1]
    }
    else if (sliderThatWasMoved == sliderCabLevel2)
    {
        //[UserSliderCode_sliderCabLevel2] -- add your slider handling code here..
		updateUserCab (2);
        //[/UserSliderCode_sliderCabLevel2]
    }
    else if (sliderThatWasMoved == sliderCabLevel3)
    {
        //[UserSliderCode_sliderCabLevel3] -- add your slider handling code here..
		updateUserCab (3);
        //[/UserSliderCode_sliderCabLevel3]
    }
    else if (sliderThatWasMoved == sliderCabLevel4)
    {
        //[UserSliderCode_sliderCabLevel4] -- add your slider handling code here..
		updateUserCab (4);
        //[/UserSliderCode_sliderCabLevel4]
    }
    else if (sliderThatWasMoved == sliderCabLevel5)
    {
        //[UserSliderCode_sliderCabLevel5] -- add your slider handling code here..
		updateUserCab (5);
        //[/UserSliderCode_sliderCabLevel5]
    }
    else if (sliderThatWasMoved == sliderCabLevel6)
    {
        //[UserSliderCode_sliderCabLevel6] -- add your slider handling code here..
		updateUserCab (6);
        //[/UserSliderCode_sliderCabLevel6]
    }
    else if (sliderThatWasMoved == sliderCabLevel7)
    {
        //[UserSliderCode_sliderCabLevel7] -- add your slider handling code here..
		updateUserCab (7);
        //[/UserSliderCode_sliderCabLevel7]
    }
    else if (sliderThatWasMoved == sliderCabLevel8)
    {
        //[UserSliderCode_sliderCabLevel8] -- add your slider handling code here..
		updateUserCab (8);
        //[/UserSliderCode_sliderCabLevel8]
    }
    else if (sliderThatWasMoved == sliderCabLevel9)
    {
        //[UserSliderCode_sliderCabLevel9] -- add your slider handling code here..
		updateUserCab (9);
        //[/UserSliderCode_sliderCabLevel9]
    }
    else if (sliderThatWasMoved == sliderCabLevel10)
    {
        //[UserSliderCode_sliderCabLevel10] -- add your slider handling code here..
		updateUserCab (10);
        //[/UserSliderCode_sliderCabLevel10]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...

void GirlMainComponent::configDocumentChanged ()
{
	for (int i = 0; i < 10; ++i)
	{
		textEditorIRPaths_M[i]->setText (String::empty, false);
		textEditorCabNames_M[i]->setText (String::empty, false);
		sliderCabLevels_M[i]->setValue (0.0, false);
		toggleButtonPermanents_M[i]->setToggleState (false, false);
		toggleButtonMonoLefts_M[i]->setToggleState (false, false);
	}

	Array<UserCab> userCabs = configDocument_M.getUserCabs ();

	for (int i = 0; i < userCabs.size(); ++i)
    {
		UserCab userCab = userCabs[i];
		int cabNumber = userCab.getSlot();

		textEditorIRPaths_M[cabNumber - 1]->setText (userCab.getFilePath (), false);
		textEditorCabNames_M[cabNumber - 1]->setText (userCab.getName (), false);
		sliderCabLevels_M[cabNumber - 1]->setValue (userCab.getLevel (), false);
		toggleButtonPermanents_M[cabNumber - 1]->setToggleState (userCab.isPermanent (), false);
		toggleButtonMonoLefts_M[cabNumber - 1]->setToggleState (userCab.isMonoLeft (), false);
	}
	updateEnabled ();
}

void GirlMainComponent::commitUserCabs ()
{
	if (!gsp1101_M.openMidi())
	{
		return;
	}

	int count = 0;
	for (int idx = 0; idx < 10; ++idx)
	{
		if (toggleButtonPermanents_M[idx]->getToggleState())
		{
			++count;
		}
	}
	bool result = false;
	for (int idx = 0; idx < 10; ++idx)
	{
		if (toggleButtonPermanents_M[idx]->getToggleState())
		{
			UserCab uc = configDocument_M.getUserCabs ()[idx];
			if (--count < 1)
			{
				result = gsp1101_M.storeLast (uc);
			}
			else
			{
				result = gsp1101_M.store (uc);
			}
			if (!result)
			{
				AlertWindow::showMessageBox (AlertWindow::WarningIcon, "User Cab Commit", "Failed");
				return;
			}
		}
	}
	AlertWindow::showMessageBox (AlertWindow::InfoIcon, "User Cab Commit", "Download done");
}

void GirlMainComponent::loadConfig ()
{
	configDocument_M.loadFromUserSpecifiedFile (true);
}

void GirlMainComponent::saveConfig ()
{
	configDocument_M.saveAsInteractive (true);
}

void GirlMainComponent::auditionUserCab(int slot)
{
	UserCab uc = configDocument_M.getUserCabs ()[slot - 1];
	if (gsp1101_M.openMidi())
	{
		bool ucPerm = uc.isPermanent();
		uc.setPermanent (false);

		if (gsp1101_M.audition (uc))
		{
			AlertWindow::showMessageBox (AlertWindow::InfoIcon, "User Cab Audition", "Download done");
		}
		else
		{
			AlertWindow::showMessageBox (AlertWindow::WarningIcon, "User Cab Audition", "Failed");
		}
		uc.setPermanent (ucPerm);
	}
}

void GirlMainComponent::testMidi ()
{
	gsp1101_M.printMidiDevices();
	if (gsp1101_M.openMidi())
	{
		if (gsp1101_M.testMidi())
		{
			AlertWindow::showMessageBox (AlertWindow::InfoIcon, "MIDI Test", "Test Passed");
		}
		else
		{
			AlertWindow::showMessageBox (AlertWindow::WarningIcon, "MIDI Test", "Test Failed");
		}
	}
}

void GirlMainComponent::selectUserCab(int slot)
{
	if (slot < 1 || slot > 10) return;

	if (initialDirectory_M == File::nonexistent)
	{
		initialDirectory_M = File::getSpecialLocation(File::userHomeDirectory);
	}

     FileChooser fileChooser ("Select Impulse Response file", initialDirectory_M, "*.wav");

	if (fileChooser.browseForFileToOpen())
    {
		File selectedFile = fileChooser.getResult ();
		if (selectedFile.isDirectory ()) return;

		textEditorIRPaths_M[slot - 1]->setText (selectedFile.getFullPathName ());
		textEditorCabNames_M[slot - 1]->setText (selectedFile.getFileNameWithoutExtension ().substring(0, 12));
		updateUserCab (slot);

		initialDirectory_M = selectedFile.getParentDirectory();
    }
}

bool GirlMainComponent::updateSlotStatus (int slot)
{
	bool slotStatus = textEditorIRPaths_M[slot - 1]->getText ().length ()
		&& textEditorCabNames_M[slot - 1]->getText ().length ();

	sliderCabLevels_M[slot - 1]->setEnabled (slotStatus);
	textButtonAuditions_M[slot - 1]->setEnabled (slotStatus);
	toggleButtonPermanents_M[slot - 1]->setEnabled (slotStatus);
	toggleButtonMonoLefts_M[slot - 1]->setEnabled (slotStatus);
	if (!slotStatus)
	{
		toggleButtonPermanents_M[slot - 1]->setToggleState (false, false);
		toggleButtonMonoLefts_M[slot - 1]->setToggleState (false, false);
	}
	return slotStatus;
}

void GirlMainComponent::updatePermanent (int slot)
{
	updateUserCab (slot);
	updateEnabled ();
}

void GirlMainComponent::updateMonoLeft (int slot)
{
	updateUserCab (slot);
}

void GirlMainComponent::updateUserCab (int slot)
{
	int pos = slot - 1;
	String filePath = textEditorIRPaths_M[pos]->getText ();
	String name = textEditorCabNames_M[pos]->getText ();
	double level = sliderCabLevels_M[pos]->getValue ();
	bool permanent = toggleButtonPermanents_M[pos]->getToggleState ();
	bool monoLeft = toggleButtonMonoLefts_M[pos]->getToggleState ();
	configDocument_M.setUserCab (pos, UserCab (slot, filePath, name, monoLeft, level, permanent));
}

void GirlMainComponent::updateEnabled()
{
	bool slotStatus1 = updateSlotStatus (1);
	bool slotStatus2 = updateSlotStatus (2);
	bool slotStatus3 = updateSlotStatus (3);
	bool slotStatus4 = updateSlotStatus (4);
	bool slotStatus5 = updateSlotStatus (5);
	bool slotStatus6 = updateSlotStatus (6);
	bool slotStatus7 = updateSlotStatus (7);
	bool slotStatus8 = updateSlotStatus (8);
	bool slotStatus9 = updateSlotStatus (9);
	bool slotStatus10 = updateSlotStatus (10);

	bool slotSaveStatus = slotStatus1 || slotStatus2 || slotStatus3 || slotStatus4 || slotStatus5
		|| slotStatus6 || slotStatus7 || slotStatus8 || slotStatus9 || slotStatus10;
	textButtonSaveConfig->setEnabled (slotSaveStatus);

	bool slotCommitIRsStatus =
		toggleButtonPermanent1->getToggleState() || toggleButtonPermanent6->getToggleState() ||
		toggleButtonPermanent2->getToggleState() || toggleButtonPermanent7->getToggleState() ||
		toggleButtonPermanent3->getToggleState() || toggleButtonPermanent8->getToggleState() ||
		toggleButtonPermanent4->getToggleState() || toggleButtonPermanent9->getToggleState() ||
		toggleButtonPermanent5->getToggleState() || toggleButtonPermanent10->getToggleState();
	textButtonCommitIRs->setEnabled (slotCommitIRsStatus);
}

GirlMainComponent::GirlMainComponentEditorListener::GirlMainComponentEditorListener (GirlMainComponent& girlMainComponentArg)
	: girlMainComponent(girlMainComponentArg)
{
	for (int i = 0; i < 10; ++i)
	{
		girlMainComponent.textEditorIRPaths_M[i]->addListener(this);
		girlMainComponent.textEditorCabNames_M[i]->addListener(this);
	}
}

GirlMainComponent::GirlMainComponentEditorListener::~GirlMainComponentEditorListener ()
{
	for (int i = 0; i < 10; ++i)
	{
		girlMainComponent.textEditorIRPaths_M[i]->removeListener(this);
		girlMainComponent.textEditorCabNames_M[i]->removeListener(this);
	}
}

void GirlMainComponent::GirlMainComponentEditorListener::textEditorTextChanged (TextEditor &editor)
{
	bool found = false;
	int i = 0;
	for (; i < 10; ++i)
	{
		if ((girlMainComponent.textEditorIRPaths_M[i] == &editor) || (girlMainComponent.textEditorCabNames_M[i] == &editor))
		{
			found =  true;
			break;
		}
	}
	girlMainComponent.updateUserCab (i + 1);
	girlMainComponent.updateEnabled ();
}

void GirlMainComponent::GirlMainComponentEditorListener::textEditorReturnKeyPressed (TextEditor &editor)
{
}

void GirlMainComponent::GirlMainComponentEditorListener::textEditorEscapeKeyPressed (TextEditor &editor)
{
}

void GirlMainComponent::GirlMainComponentEditorListener::textEditorFocusLost (TextEditor &editor)
{
}

GirlMainComponent::ConfigDocumentChangeListener::ConfigDocumentChangeListener (GirlMainComponent& girlMainComponentArg)
: girlMainComponent (girlMainComponentArg)
{
	girlMainComponent.configDocument_M.addChangeListener (this);
}

GirlMainComponent::ConfigDocumentChangeListener::~ConfigDocumentChangeListener ()
{
	girlMainComponent.configDocument_M.removeChangeListener (this);
}

void GirlMainComponent::ConfigDocumentChangeListener::changeListenerCallback (ChangeBroadcaster* source)
{
	girlMainComponent.configDocumentChanged ();
}


//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Jucer information section --

    This is where the Jucer puts all of its metadata, so don't change anything in here!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="GirlMainComponent" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="4" snapActive="1" snapShown="1" overlayOpacity="0.330000013"
                 fixedSize="1" initialWidth="800" initialHeight="480">
  <BACKGROUND backgroundColour="ffdfdceb">
    <ROUNDRECT pos="752 32 44 388" cornerSize="10" fill="solid: ffcdc5f1" hasStroke="0"/>
    <ROUNDRECT pos="624 364 171 56" cornerSize="10" fill="solid: ffcdc5f1" hasStroke="0"/>
    <ROUNDRECT pos="3 364 264 112" cornerSize="10" fill="solid: ffcdc5f1" hasStroke="0"/>
    <ROUNDRECT pos="292 364 312 56" cornerSize="10" fill="solid: ffcdc5f1" hasStroke="0"/>
    <ROUNDRECT pos="624 428 171 48" cornerSize="10" fill="solid: ffcdc5f1" hasStroke="0"/>
  </BACKGROUND>
  <LABEL name="" id="f65b8b3e69c9d09c" memberName="label1" virtualName=""
         explicitFocusOrder="0" pos="4 4 48 24" edTextCol="ff000000" edBkgCol="0"
         labelText="Cab #" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="36"/>
  <LABEL name="" id="b25a5b00e8218a0b" memberName="labelIRPath1" virtualName=""
         explicitFocusOrder="0" pos="4 36 48 24" edTextCol="ff000000"
         edBkgCol="0" labelText="1" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="36"/>
  <LABEL name="" id="8474c34feea20ec1" memberName="labelIRPath2" virtualName=""
         explicitFocusOrder="0" pos="4 68 48 24" edTextCol="ff000000"
         edBkgCol="0" labelText="2" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="36"/>
  <LABEL name="" id="2d1c8ec00115d35" memberName="labelIRPath3" virtualName=""
         explicitFocusOrder="0" pos="4 100 48 24" edTextCol="ff000000"
         edBkgCol="0" labelText="3" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="36"/>
  <LABEL name="" id="6f5bb1a8c8b5a4fe" memberName="labelIRPath4" virtualName=""
         explicitFocusOrder="0" pos="4 132 48 24" edTextCol="ff000000"
         edBkgCol="0" labelText="4" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="36"/>
  <LABEL name="" id="5c95b0d086bc7e1" memberName="labelIRPath5" virtualName=""
         explicitFocusOrder="0" pos="4 164 48 24" edTextCol="ff000000"
         edBkgCol="0" labelText="5" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="36"/>
  <LABEL name="" id="62f8e41e2507aaec" memberName="labelIRPath6" virtualName=""
         explicitFocusOrder="0" pos="4 196 48 24" edTextCol="ff000000"
         edBkgCol="0" labelText="6" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="36"/>
  <LABEL name="" id="97ee05892bce7c94" memberName="labelIRPath7" virtualName=""
         explicitFocusOrder="0" pos="4 228 48 24" edTextCol="ff000000"
         edBkgCol="0" labelText="7" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="36"/>
  <LABEL name="" id="2461391814ccb921" memberName="labelIRPath8" virtualName=""
         explicitFocusOrder="0" pos="4 260 48 24" edTextCol="ff000000"
         edBkgCol="0" labelText="8" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="36"/>
  <LABEL name="" id="6dd5646d645d9149" memberName="labelIRPath9" virtualName=""
         explicitFocusOrder="0" pos="4 292 48 24" edTextCol="ff000000"
         edBkgCol="0" labelText="9" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="36"/>
  <LABEL name="" id="b550faee046f971b" memberName="labelIRPath10" virtualName=""
         explicitFocusOrder="0" pos="4 324 48 24" edTextCol="ff000000"
         edBkgCol="0" labelText="10" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="36"/>
  <TEXTEDITOR name="IRPath" id="6d680ebffb782cec" memberName="textEditorIRPath1"
              virtualName="" explicitFocusOrder="0" pos="60 36 256 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="1" scrollbars="1"
              caret="1" popupmenu="1"/>
  <TEXTEDITOR name="IRPath" id="e0db76306fa850d5" memberName="textEditorIRPath2"
              virtualName="" explicitFocusOrder="0" pos="60 68 256 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="1" scrollbars="1"
              caret="1" popupmenu="1"/>
  <TEXTEDITOR name="IRPath" id="3c38195319a82dc0" memberName="textEditorIRPath3"
              virtualName="" explicitFocusOrder="0" pos="60 100 256 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="1" scrollbars="1"
              caret="1" popupmenu="1"/>
  <TEXTEDITOR name="IRPath" id="d62e8f2f209c5754" memberName="textEditorIRPath4"
              virtualName="" explicitFocusOrder="0" pos="60 132 256 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="1" scrollbars="1"
              caret="1" popupmenu="1"/>
  <TEXTEDITOR name="IRPath" id="420794d8a1aa6c58" memberName="textEditorIRPath5"
              virtualName="" explicitFocusOrder="0" pos="60 164 256 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="1" scrollbars="1"
              caret="1" popupmenu="1"/>
  <TEXTEDITOR name="IRPath" id="b18afdda47ff2625" memberName="textEditorIRPath6"
              virtualName="" explicitFocusOrder="0" pos="60 196 256 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="1" scrollbars="1"
              caret="1" popupmenu="1"/>
  <TEXTEDITOR name="IRPath" id="34d4e0241cff478c" memberName="textEditorIRPath7"
              virtualName="" explicitFocusOrder="0" pos="60 228 256 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="1" scrollbars="1"
              caret="1" popupmenu="1"/>
  <TEXTEDITOR name="IRPath" id="cbd0b428f5e15f7" memberName="textEditorIRPath8"
              virtualName="" explicitFocusOrder="0" pos="60 260 256 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="1" scrollbars="1"
              caret="1" popupmenu="1"/>
  <TEXTEDITOR name="IRPath" id="31e23ed2d0bfc0ce" memberName="textEditorIRPath9"
              virtualName="" explicitFocusOrder="0" pos="60 292 256 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="1" scrollbars="1"
              caret="1" popupmenu="1"/>
  <TEXTEDITOR name="IRPath" id="bd8dd43093105b1b" memberName="textEditorIRPath10"
              virtualName="" explicitFocusOrder="0" pos="60 324 256 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="1" scrollbars="1"
              caret="1" popupmenu="1"/>
  <LABEL name="" id="33bbcf73061e4b70" memberName="label2" virtualName=""
         explicitFocusOrder="0" pos="60 4 256 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Impulse Response (IR) Path" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="36"/>
  <TEXTBUTTON name="" id="58c88747f7f6dafa" memberName="textButtonIRPath1"
              virtualName="" explicitFocusOrder="0" pos="324 36 72 24" buttonText="Browse..."
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="" id="cbb4760d6d45a52b" memberName="textButtonIRPath2"
              virtualName="" explicitFocusOrder="0" pos="324 68 72 24" buttonText="Browse..."
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="" id="b9f98d3898a473d7" memberName="textButtonIRPath3"
              virtualName="" explicitFocusOrder="0" pos="324 100 72 24" buttonText="Browse..."
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="" id="52596980f0a3e9c" memberName="textButtonIRPath4" virtualName=""
              explicitFocusOrder="0" pos="324 132 72 24" buttonText="Browse..."
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="" id="34033fe375e49ec7" memberName="textButtonIRPath5"
              virtualName="" explicitFocusOrder="0" pos="324 164 72 24" buttonText="Browse..."
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="" id="b9fb9f803f3033c2" memberName="textButtonIRPath6"
              virtualName="" explicitFocusOrder="0" pos="324 196 72 24" buttonText="Browse..."
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="" id="beb4c83662a13eba" memberName="textButtonIRPath7"
              virtualName="" explicitFocusOrder="0" pos="324 228 72 24" buttonText="Browse..."
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="" id="47596426b747d482" memberName="textButtonIRPath8"
              virtualName="" explicitFocusOrder="0" pos="324 260 72 24" buttonText="Browse..."
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="" id="94ca8afb652ac9b7" memberName="textButtonIRPath9"
              virtualName="" explicitFocusOrder="0" pos="324 292 72 24" buttonText="Browse..."
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="" id="e05c475f4062bd23" memberName="textButtonIRPath10"
              virtualName="" explicitFocusOrder="0" pos="324 324 72 24" buttonText="Browse..."
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTEDITOR name="CabName" id="b5d07fb023f0e466" memberName="textEditorCabName1"
              virtualName="" explicitFocusOrder="0" pos="404 36 104 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <LABEL name="" id="b44b35f318237ed3" memberName="label3" virtualName=""
         explicitFocusOrder="0" pos="404 4 104 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Cab Name" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="36"/>
  <TEXTEDITOR name="CabName" id="6c365308e1141297" memberName="textEditorCabName2"
              virtualName="" explicitFocusOrder="0" pos="404 68 104 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <TEXTEDITOR name="CabName" id="bcba711f8be9d820" memberName="textEditorCabName3"
              virtualName="" explicitFocusOrder="0" pos="404 100 104 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <TEXTEDITOR name="CabName" id="93d5596a674cf7bb" memberName="textEditorCabName4"
              virtualName="" explicitFocusOrder="0" pos="404 132 104 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <TEXTEDITOR name="CabName" id="4f6e29141b1d7d7f" memberName="textEditorCabName5"
              virtualName="" explicitFocusOrder="0" pos="404 164 104 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <TEXTEDITOR name="CabName" id="acbe54750b02eb74" memberName="textEditorCabName6"
              virtualName="" explicitFocusOrder="0" pos="404 196 104 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <TEXTEDITOR name="CabName" id="6f525171074b2769" memberName="textEditorCabName7"
              virtualName="" explicitFocusOrder="0" pos="404 228 104 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <TEXTEDITOR name="CabName" id="64eae73791a4227d" memberName="textEditorCabName8"
              virtualName="" explicitFocusOrder="0" pos="404 260 104 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <TEXTEDITOR name="CabName" id="6ea6bb33c8140cf0" memberName="textEditorCabName9"
              virtualName="" explicitFocusOrder="0" pos="404 292 104 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <TEXTEDITOR name="CabName" id="91b6bdd98a5a924e" memberName="textEditorCabName10"
              virtualName="" explicitFocusOrder="0" pos="404 324 104 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <LABEL name="" id="22d4c9465d69f07f" memberName="label4" virtualName=""
         explicitFocusOrder="0" pos="516 4 104 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Cab Level (dB)" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="36"/>
  <SLIDER name="" id="c5e963e4fbf4deee" memberName="sliderCabLevel1" virtualName=""
          explicitFocusOrder="0" pos="516 36 104 24" min="-24" max="6"
          int="0.5" style="RotaryVerticalDrag" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="" id="18d8d389c8b0c5f0" memberName="sliderCabLevel2" virtualName=""
          explicitFocusOrder="0" pos="516 68 104 24" min="-24" max="6"
          int="0.5" style="RotaryVerticalDrag" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="" id="79d5d1ee7a9d0928" memberName="sliderCabLevel3" virtualName=""
          explicitFocusOrder="0" pos="516 100 104 24" min="-24" max="6"
          int="0.5" style="RotaryVerticalDrag" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="" id="3831f7359d52aec3" memberName="sliderCabLevel4" virtualName=""
          explicitFocusOrder="0" pos="516 132 104 24" min="-24" max="6"
          int="0.5" style="RotaryVerticalDrag" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="" id="3171fdcb642480b3" memberName="sliderCabLevel5" virtualName=""
          explicitFocusOrder="0" pos="516 164 104 24" min="-24" max="6"
          int="0.5" style="RotaryVerticalDrag" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="" id="ab7c5b739e1b3d6f" memberName="sliderCabLevel6" virtualName=""
          explicitFocusOrder="0" pos="516 196 104 24" min="-24" max="6"
          int="0.5" style="RotaryVerticalDrag" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="" id="8f52159e5adb77af" memberName="sliderCabLevel7" virtualName=""
          explicitFocusOrder="0" pos="516 228 104 24" min="-24" max="6"
          int="0.5" style="RotaryVerticalDrag" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="" id="c7466a5f183a614b" memberName="sliderCabLevel8" virtualName=""
          explicitFocusOrder="0" pos="516 260 104 24" min="-24" max="6"
          int="0.5" style="RotaryVerticalDrag" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="" id="2c3dbead13a224d1" memberName="sliderCabLevel9" virtualName=""
          explicitFocusOrder="0" pos="516 292 104 24" min="-24" max="6"
          int="0.5" style="RotaryVerticalDrag" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="" id="699d58593f01fb79" memberName="sliderCabLevel10" virtualName=""
          explicitFocusOrder="0" pos="516 324 104 24" min="-24" max="6"
          int="0.5" style="RotaryVerticalDrag" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <TEXTBUTTON name="" id="b11ddabf5086371" memberName="textButtonAudition1"
              virtualName="" explicitFocusOrder="0" pos="680 36 64 24" buttonText="Audition"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="" id="b66a83157d48092e" memberName="textButtonAudition2"
              virtualName="" explicitFocusOrder="0" pos="680 68 64 24" buttonText="Audition"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="" id="5a8680ca8ce43a2e" memberName="textButtonAudition3"
              virtualName="" explicitFocusOrder="0" pos="680 100 64 24" buttonText="Audition"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="" id="72a10257b71f3e44" memberName="textButtonAudition4"
              virtualName="" explicitFocusOrder="0" pos="680 132 64 24" buttonText="Audition"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="" id="d3c686fd7727d8ef" memberName="textButtonAudition5"
              virtualName="" explicitFocusOrder="0" pos="680 164 64 24" buttonText="Audition"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="" id="5be15fc88420efdf" memberName="textButtonAudition6"
              virtualName="" explicitFocusOrder="0" pos="680 196 64 24" buttonText="Audition"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="" id="bce004f1eca56ae6" memberName="textButtonAudition7"
              virtualName="" explicitFocusOrder="0" pos="680 228 64 24" buttonText="Audition"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="" id="2bc77ae0371e95b8" memberName="textButtonAudition8"
              virtualName="" explicitFocusOrder="0" pos="680 260 64 24" buttonText="Audition"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="" id="e5791ee66c917f11" memberName="textButtonAudition9"
              virtualName="" explicitFocusOrder="0" pos="680 292 64 24" buttonText="Audition"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="" id="9f09101e2da27d15" memberName="textButtonAudition10"
              virtualName="" explicitFocusOrder="0" pos="680 324 64 24" buttonText="Audition"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TOGGLEBUTTON name="" id="2e6b7e2be24b871" memberName="toggleButtonPermanent1"
                virtualName="" explicitFocusOrder="0" pos="764 36 24 24" buttonText=""
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="" id="50d107c6cdbdbc3f" memberName="toggleButtonPermanent2"
                virtualName="" explicitFocusOrder="0" pos="764 68 24 24" buttonText=""
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="" id="9279e433a619fab7" memberName="toggleButtonPermanent3"
                virtualName="" explicitFocusOrder="0" pos="764 100 24 24" buttonText=""
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="" id="10322b264e060a58" memberName="toggleButtonPermanent4"
                virtualName="" explicitFocusOrder="0" pos="764 132 24 24" buttonText=""
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="" id="286b14c201ae92e2" memberName="toggleButtonPermanent5"
                virtualName="" explicitFocusOrder="0" pos="764 164 24 24" buttonText=""
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="" id="632a8deb47ea382d" memberName="toggleButtonPermanent6"
                virtualName="" explicitFocusOrder="0" pos="764 196 24 24" buttonText=""
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="" id="78fdbca0a125ddb8" memberName="toggleButtonPermanent7"
                virtualName="" explicitFocusOrder="0" pos="764 228 24 24" buttonText=""
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="" id="3afbed42e9fdf24" memberName="toggleButtonPermanent8"
                virtualName="" explicitFocusOrder="0" pos="764 260 24 24" buttonText=""
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="" id="f45c2f0406cc7945" memberName="toggleButtonPermanent9"
                virtualName="" explicitFocusOrder="0" pos="764 292 24 24" buttonText=""
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="" id="afc0e6d6f9ddbf14" memberName="toggleButtonPermanent10"
                virtualName="" explicitFocusOrder="0" pos="764 324 24 24" buttonText=""
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TEXTBUTTON name="" id="10a739e3183a0720" memberName="textButtonLoadConfig"
              virtualName="" explicitFocusOrder="0" pos="300 380 144 24" buttonText="Load Configuration..."
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="" id="fdd94e66df3368b3" memberName="textButtonSaveConfig"
              virtualName="" explicitFocusOrder="0" pos="452 380 144 24" buttonText="Save Configuration..."
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="" id="a044c85f5cf34dad" memberName="textButtonCommitIRs"
              virtualName="" explicitFocusOrder="0" pos="632 380 156 24" buttonText="Commit Selected IRs..."
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <LABEL name="" id="3d7db9dabf10b8e4" memberName="label5" virtualName=""
         explicitFocusOrder="0" pos="20 380 228 84" bkgCol="8cffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="GIRL&#10;Gsp 1101 Impulse Reponse Loader&#10;v1 - alpha 110224.0&#10;&#169; 2010, 2011 jabelardo&#10;Distribuited under GPL v2"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="9"/>
  <TEXTBUTTON name="" id="b38028e19e5d6aab" memberName="textButtonTestMidi"
              virtualName="" explicitFocusOrder="0" pos="632 440 156 24" buttonText="Test Midi..."
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <LABEL name="" id="f5ab64be140cf305" memberName="label6" virtualName=""
         explicitFocusOrder="0" pos="752 4 44 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Perm" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="34"/>
  <LABEL name="" id="29e504ecdc127fe" memberName="label7" virtualName=""
         explicitFocusOrder="0" pos="624 4 52 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Mono&#10;Left" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="36"/>
  <TOGGLEBUTTON name="" id="8b1d6a46f2246194" memberName="toggleButtonMonoLeft1"
                virtualName="" explicitFocusOrder="0" pos="636 36 24 24" buttonText=""
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="" id="3909beb9d3adf4ab" memberName="toggleButtonMonoLeft2"
                virtualName="" explicitFocusOrder="0" pos="636 68 24 24" buttonText=""
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="" id="94492b3a5be9bcd6" memberName="toggleButtonMonoLeft3"
                virtualName="" explicitFocusOrder="0" pos="636 100 24 24" buttonText=""
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="" id="9570af8f006e30fc" memberName="toggleButtonMonoLeft4"
                virtualName="" explicitFocusOrder="0" pos="636 132 24 24" buttonText=""
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="" id="21f695a3210c9e39" memberName="toggleButtonMonoLeft5"
                virtualName="" explicitFocusOrder="0" pos="636 164 24 24" buttonText=""
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="" id="324aa4c14a0fad01" memberName="toggleButtonMonoLeft6"
                virtualName="" explicitFocusOrder="0" pos="636 196 24 24" buttonText=""
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="" id="4d61d3ff6bfa948b" memberName="toggleButtonMonoLeft7"
                virtualName="" explicitFocusOrder="0" pos="636 224 24 24" buttonText=""
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="" id="2c262ff7d47da06c" memberName="toggleButtonMonoLeft8"
                virtualName="" explicitFocusOrder="0" pos="636 256 24 24" buttonText=""
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="" id="4112e7bda87aec81" memberName="toggleButtonMonoLeft9"
                virtualName="" explicitFocusOrder="0" pos="636 288 24 24" buttonText=""
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="" id="484fb50c07407b12" memberName="toggleButtonMonoLeft10"
                virtualName="" explicitFocusOrder="0" pos="636 320 24 24" buttonText=""
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif
