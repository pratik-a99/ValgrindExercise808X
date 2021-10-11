/**
 *  @file    main.cpp
 *  @author  Pratik Acharya
 *  @copyright MIT Licence
 *  @brief Week 6 Valgrind Excercise
 *  Using valgrind to debug issues which go undetected by the compiler
 */

#include <iostream>
#include <AnalogSensor.hpp>

/**
*   @brief  main() method to call AnalogSensor
*   @param  None
*   @return 0
*/
int main() {
    AnalogSensor lightSensor(5);
    std::cout << "Averaged sensor reading: " << lightSensor.read() << std::endl;

    // 'Conditional jump or move depends on uninitialised value(s)' solved
    // by initializing 'terminator' utilising 'read()' method
    bool terminator = lightSensor.read() ? true : false;

    // Using 'terminator' to output if computation is completed
    if ( terminator ) {
        std::cout << "DONE" << std::endl;
    }
    return 0;
}
