#include <stdio.h>

#define ARRAYSIZE 10

int main(void)
{
	int numbers[ARRAYSIZE];
	int *p;

	for (p=numbers;p<numbers+ARRAYSIZE;p++)
	{
		printf("Enter number: ");
		scanf("%d", p); // no &
	}
	for (p=numbers+ARRAYSIZE-1; p>=numbers; p--)
		printf("%d\n",*p);

	return 0;
}
