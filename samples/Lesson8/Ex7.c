#include <stdio.h>

int main(void)
{
	int a[5];
	int *p1 = &a[0], *p2 = &a[4];
	int m1,m2;

	m1 = (long int) p1;
	m2 = (long int) p2;

	printf("p1 = %p, p2 = %p.\n", p1, p2);
	printf("m1 = %d, m2 = %d.\n", m1, m2);
	printf("p2 - p1 = %ld.\n", p2-p1);
	printf("m2 - m1 = %d.\n", m2-m1);
	return 0;
}
