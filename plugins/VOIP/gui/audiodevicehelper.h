#pragma once

#include <QAudioInput>
#include <QAudioOutput>

class AudioDeviceHelper
{
public:
    AudioDeviceHelper();
    static QAudioInput* getDefaultInputDevice();
    static QAudioInput* getPreferedInputDevice();
    //static list getInputDeviceList();

    static QAudioOutput* getDefaultOutputDevice();
    static QAudioOutput* getPreferedOutputDevice();
    //static list getOutputDeviceList();
};
