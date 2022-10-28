#include "main.h"

unsigned long long getacc()
{
	unsigned long long n = 0;
	do
	{
		n *= RAND_MAX;
		n += rand();
	} while (n < 1000000000);
	
	return (n % 10000000000);
}
