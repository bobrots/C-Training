
/*
    Exercise 1:
    
    Create a header file and declare a function in the 'TMC' namespace which converts the 
    temperature in °F to °C. Then in the main function, which is 
    already defined, use this function to convert from 110 °F to °C. 

    Celcius = (Fahrenheit - 32) * 5 / 9

    Print the result to the console by using the standard character out, std::cout. 
    When converting from 110 °F the result should be 43.333 °C.
*/

#include <iostream>
#include "Functions.h"

int main()
{
    float result{ TMC::ConvertFahrenheitToCelcius(110.f) };

    std::cout << "110 °F is equal to " << result << " °C\n";
}
