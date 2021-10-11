/**
 *  @file  AnalogSensor.cpp
 *  @author  Pratik Acharya
 *  @copyright MIT Licence
 *  @brief Defining methods for "AnalogSensor.hpp"
 */

#include <AnalogSensor.hpp>
#include <numeric>
#include <vector>


/**
*   @brief  Constructor for AnalogSensor class
*   @param[in] samples intilializing samples
*   @return None
*/
AnalogSensor::AnalogSensor(unsigned int samples)
    : mSamples(samples)
{
}

/**
*   @brief  Destructor for AnalogSensor class
*   @param  None
*   @return None
*/
AnalogSensor::~AnalogSensor()
{
}

/**
*   @brief  reading samples that was initialized in the constructor
*   @param[out] result average reading
*   @return average reading
*/
int AnalogSensor::read()
{
    std::vector<int> *readings = new std::vector<int>(mSamples, 10);

    double result = std::accumulate( readings->begin(), readings->end(), 0.0 ) / readings->size();

    // deleted the memory allocated with 'new' operator
    // to debug memory loss issue in valgrind
    delete readings;
    return result;
}


