
/*
    Exercise 1:
    
    Create a function to converts the temperature from degrees Fahrenheit to degrees Celcius. 
    Call this function from main and supply it the value 110 and store the result in a variable.

    Celcius = (Fahrenheit - 32) * 5 / 9

    Print the result to the console. 
*/

#include <iostream>

float ConvertFahrenheitToCelcius(float fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}

int main()
{
    float result{ ConvertFahrenheitToCelcius(110.f) };

    std::cout << "110 °F is equal to " << result << " °C\n";
}
