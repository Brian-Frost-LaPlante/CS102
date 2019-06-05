// This program prints all numbers from 1-20 div. by 3

#include <stdio.h>

int main(void)
{
	for (int x = 1; x < 20; x++)
	{
		if (x%3 != 0)
			continue;
	
		printf("%d\n",x);
	}
	return 0;
}
// Note that although I used 'continue', an if statement for the printf statement would do the same here
