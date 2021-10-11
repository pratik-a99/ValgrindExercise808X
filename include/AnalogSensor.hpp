#pragma once

#include <iostream>

class AnalogSensor
{
public:
    AnalogSensor(unsigned int samples);
    ~AnalogSensor();
    int read();
private:
    unsigned int mSamples;
};
