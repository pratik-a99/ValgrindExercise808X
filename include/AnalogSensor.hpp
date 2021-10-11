/**
 *  @file  AnalogSensor.hpp
 *  @author  Pratik Acharya
 *  @copyright MIT Licence
 *  @brief Header defining AnalogSensor class
 */

#pragma once

#include <iostream>

/**
*   @brief Class AnalogSensor
*/

class AnalogSensor
{
public:
    explicit AnalogSensor(unsigned int samples);
    ~AnalogSensor();
    int read();
private:
    unsigned int mSamples;
};
