
#include "Functions.h"


namespace TMC
{
	int ProcessArray(int arr[], int size)
	{
        int count = 0;

        for (int i = 0; i < size; ++i)
        {
            if (arr[i] > 50)
            {
                ++count;
            }
            if (arr[i] < 50)
            {
                arr[i] = 0;
            }
        }

        
        return count;
	}
}