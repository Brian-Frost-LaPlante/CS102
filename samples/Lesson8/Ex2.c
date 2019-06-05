#include <stdio.h>

int main(void)
{
	int x = 5;
	int *p1 = &x, *p2 = &x;

	printf("The value of x is %d.\n", x);
	printf("The value that p1 points to is %d.\n", *p1);
	printf("The value that p2 points to is %d.\n", *p2);
	
	*p1 = 10;

	printf("The value of x is %d.\n", x);
	printf("The value that p1 points to is %d.\n", *p1);
	printf("The value that p2 points to is %d.\n", *p2);
	
	return 0;
}
