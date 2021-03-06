
/*
    Exercise 3:

    Given the array defined in the main function, create a function, using a separate header and cpp file and 
    in the 'TMC' namespace, that processes the array by counting the number of items that are above 50 and sets 
    the values to 0 if they are below 50. The count should be returned by the function. Print the result to 
    the console using the standard character out, std::cout.

    To verify the number replacement worked correctly, print the first 5 elements to the console.
    
    Call the function in the main function. 
    

    The result of the count and the first 5 elements after processing should be:

    Numbers above 50: 54
    50
    0
    0
    0
    87
*/

#include <iostream>
#include "Functions.h"

int main()
{
    int arr[] = { 
        50,	7,  37, 44,	87,
        66,	52,	5,	91,	96,
        68,	50,	2,	25,	81,
        10,	15,	49,	46,	62,
        54,	86,	1,	46,	64,
        54,	68,	7,	81,	30,
        53,	3,	18,	43,	81,
        46,	62,	20,	88,	82,
        43,	15,	68,	97,	52,
        50,	87,	77,	7,	97,
        1,	43,	89,	91,	5,
        95,	35,	95,	86,	66,
        78,	29,	64,	79,	96,
        93,	13,	90,	55,	12,
        82,	36,	23,	78,	19,
        14,	7,	55,	90,	98,
        30,	12,	88,	62,	71,
        88,	63,	73,	74,	65,
        38,	55,	43,	9,	49,
        59,	98,	24,	11,	40 
    };

    int count{ TMC::ProcessArray(arr, 100) };

    std::cout << "Numbers above 50: " << count << "\n";

    for (int i = 0; i < 5; ++i)
    {
        std::cout << arr[i] << "\n";
    }
}

