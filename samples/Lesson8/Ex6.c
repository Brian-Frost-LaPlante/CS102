#include <stdio.h>

int main(void)
{
	int a[5] = {10,20,30,40,50};
	int *p1;
	int *p2;

	p1 = a;
	p2 = &a[0];
	printf("a = %p, p1 = %p, p2 = %p.\n", a, p1, p2);
	printf("a[0] = %d, p1[0] = %d, p2[0] = %d.\n", a[0], p1[0], p2[0]);
	printf("a[4] = %d, p1[4] = %d, p2[4] = %d.\n", a[4], p1[4], p2[4]);
	printf("*(a+4) = %d, *(p1+4) = %d, *(p2+4) = %d.\n", *(a+4), *(p1+4), *(p2+4));

	return 0;
}
