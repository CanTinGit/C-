#include "FunctionsCollector.h"

bool isPrime(int number)
{
	for (int i = 2; i <= number / i; i++)
	{
		int factor = number / i;
		if (factor * i == number)
		{
			return false;
		}
	}
	return true;
}
