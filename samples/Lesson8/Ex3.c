#include <stdio.h>

void swap(int *,int *);

int main(void)
{
	int a = 5, b = 10;
	printf("Before swap, a = %d and b = %d.\n",a,b);
	swap(&a,&b);
	printf("After swap, a = %d and b = %d.\n",a,b);

	return 0;
}

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	return;
}
