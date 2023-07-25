/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

//#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class EQ3bandAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    EQ3bandAudioProcessorEditor (EQ3bandAudioProcessor&);
    ~EQ3bandAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    
     EQ3bandAudioProcessor& audioProcessor;
     juce::Slider lowGainSlider;
     juce::Slider midGainSlider;
     juce::Slider highGainSlider;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (EQ3bandAudioProcessorEditor)
};
