#include <stdio.h>

void swap(float *,float *);

int main(void)
{
	float a = 5.1, b = 10.2;
	printf("Before swap, a = %.1f and b = %.1f.\n",a,b);
	swap(&a,&b);
	printf("After swap, a = %.1f and b = %.1f.\n",a,b);

	return 0;
}

void swap(float *a, float *b)
{
	float temp = *a;
	*a = *b;
	*b = temp;
	return;
}
