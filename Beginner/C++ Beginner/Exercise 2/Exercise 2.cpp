
/*
    Exercise 2:

    In this exercise create a new header and cpp file containing a function 
    'IsEven' which is inside the 'TMC' namespace. The function should return  a
    boolean value indicating if the supplied number is an even number, true if even 
    and false if odd. Test this function for for instance the values 3 and 4. Call the
    function from the main method. 
    
    Print the result to the console using the standard character out, std::cout.

    Hint: the modulus operator can be used.
*/

#include <iostream>
#include "Functions.h"

int main()
{
    const int val1{ 3 };
    const int val2{ 6 };

    std::cout << "Is the value " << val1 << " an even number: " << TMC::IsEven(val1) << "\n";
    std::cout << "Is the value " << val2 << " an even number: " << TMC::IsEven(val2) << "\n";
}
