
/**
 *  @file    test.cpp
 *  @author  Pratik Acharya
 *  @copyright MIT Licence
 *  @brief tests to check main.cpp
 * */

#include <gtest/gtest.h>
#include <AnalogSensor.hpp>

/**
 * @brief Test to check if output is as expected
 * */
TEST(test, testSensorOutput) {
  AnalogSensor testObj(1);
  ASSERT_EQ(10, testObj.read());
}
