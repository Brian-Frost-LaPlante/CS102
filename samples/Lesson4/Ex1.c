/*
	This program sums the digits in a given integer and prints the sum
*/

#include <stdio.h>

int main(void)
{
	int x, x_perm, digit, sum_digits;

	printf("Enter a positive integer: ");
	scanf("%d",&x);

	sum_digits = 0;
	x_perm = x;

	while (x>0)
	{
		digit = x%10;
		sum_digits = sum_digits + digit;
		x = x/10;
	}

	printf("The sum of the digits in %d is %d \n",x_perm,sum_digits);
	return 0;
}
