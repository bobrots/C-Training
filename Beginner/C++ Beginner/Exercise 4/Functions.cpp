
#include "Functions.h"

namespace TMC
{
	void swap(int& a, int& b)
	{
		int temp{ a };
		a = b;
		b = temp;
	}
}