
/*
    Exercise 4:

    Create a function that, using an extra header file and cpp file in the 'TMC' namespace, swappes
    2 integer values. Verify that the function performs well by printing the results using the 
    standard character out, std::cout. 

    As an example, if a has the value 2 and b has the value 3 then after the swap function
    a contains the value 3 and b the value 2. 
*/

#include <iostream>
#include "Functions.h"

int main()
{
    int a{ 2 };
    int b{ 3 };

    TMC::swap(a, b);

    std::cout << "a = " << a << ", b = " << b << "\n";
}

