#include <stdio.h>

void try_change(int *);

int x = 5;
int y = 10;

int main(void)
{
	int *p = &x;
	printf("Before function, p points to value %d.\n", *p);
	try_change(p);
	printf("After function, p points to value %d.\n", *p);
	return 0;
}

void try_change(int *p)
{
	p = &y;
	printf("In function, p points to value %d.\n", *p);
	return;
}
