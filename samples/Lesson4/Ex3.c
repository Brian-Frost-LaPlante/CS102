#include <stdio.h>

int main(void)
{
	int power, result;

	for (power = 1, result = 2; power <= 10; power ++, result = result*2)
	{
		printf("2 to the power of %d equals %d. \n", power, result);
	}
	return 0;
}
