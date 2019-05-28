#include <stdio.h>

int main(void)
{
	int x;

	printf("Enter an integer: ");
	scanf("%d",&x);

	if (x==10)
		printf("Hello to the number %d\n",x);
	return 0;
}
