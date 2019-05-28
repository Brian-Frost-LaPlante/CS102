#include <stdio.h>

int main(void)
{
	int a;
	int b;

	printf("Enter an integer: ");
	scanf("%d",&a);
	printf("Enter another integer: ");
	scanf("%d",&b);

	if ((a==b)||(a>15))
		printf("Hello to the number %d\n",a);
	return 0;
}
