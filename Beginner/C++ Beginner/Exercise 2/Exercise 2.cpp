
/*
    Exercise 2:

    Create a function that determines if a integer value is an even number. 
    In the entry point of the application declare a variable that holds the value 3
    and call the declared function with this value. 
    Also verify that the function works for an even number, for instance the value 6.
    Print the result to the console. 

    Hint: the modulus operator can be used.
*/

#include <iostream>

bool IsEven(const int val)
{
    return (val % 2) == 0;
}

int main()
{
    const int val1{ 3 };
    const int val2{ 6 };

    std::cout << "Is the value " << val1 << " an even number: " << IsEven(val1) << "\n";
    std::cout << "Is the value " << val2 << " an even number: " << IsEven(val2) << "\n";
}
