// This program prints all of the numbers from 1 to 1000 whose digits sum to 5

#include <stdio.h>

int main(void)
{
	
	int x, sum_digits, digit, temp;	

	for (x = 1; x<=1000; x++)
	{
		temp = x;
		sum_digits = 0;
		while(temp > 0)
		{
			digit = temp%10;
			sum_digits = sum_digits + digit;
			temp = temp/10;
		}

		if (sum_digits == 5)
			printf("%d\n",x);
	}
	return 0;
}
