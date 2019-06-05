#include <stdio.h>

int main(void)
{
	int x;
	int *p;

	x = 5;
	p = &x;

	printf("The value of x is %d.\n", x);
	printf("The address of x is %p.\n", &x);
	printf("The value of p is %p.\n", p);
	printf("The value that p points to is %d.\n", *p);
	printf("The address of p is %p.\n", &p);

	return 0;
}
