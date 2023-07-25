/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
EQ3bandAudioProcessorEditor::EQ3bandAudioProcessorEditor (EQ3bandAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (400, 300);
// Low Gain Slider
    lowGainSlider.setSliderStyle(juce::Slider::RotaryHorizontalVerticalDrag);
    lowGainSlider.setTextBoxStyle(juce::Slider::NoTextBox, false, 0, 0);
    addAndMakeVisible(lowGainSlider);

    // Mid Gain Slider
    midGainSlider.setSliderStyle(juce::Slider::RotaryHorizontalVerticalDrag);
    midGainSlider.setTextBoxStyle(juce::Slider::NoTextBox, false, 0, 0);
    addAndMakeVisible(midGainSlider);

    // High Gain Slider
    highGainSlider.setSliderStyle(juce::Slider::RotaryHorizontalVerticalDrag);
    highGainSlider.setTextBoxStyle(juce::Slider::NoTextBox, false, 0, 0);
    addAndMakeVisible(highGainSlider);

}

EQ3bandAudioProcessorEditor::~EQ3bandAudioProcessorEditor()
{
}

//==============================================================================
void EQ3bandAudioProcessorEditor::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

    g.setColour (juce::Colours::white);
    g.setFont (15.0f);
    g.drawFittedText ("Hello World!", getLocalBounds(), juce::Justification::centred, 1);
}

void EQ3bandAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
    // Set the position and size of the sliders
    lowGainSlider.setBounds(20, 20, 120, 120);
    midGainSlider.setBounds(160, 20, 120, 120);
    highGainSlider.setBounds(300, 20, 120, 120);

}
