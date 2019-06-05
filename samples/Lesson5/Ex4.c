#include <stdio.h>
#define ARRAYSIZE 10

int main(void)
{
	int x, numbers[ARRAYSIZE];

	for(x = 0; x < ARRAYSIZE; x++)
	{
		printf("Enter number: ");
		scanf("%d",&numbers[x]);
	}

	for (x = ARRAYSIZE - 1; x >= 0; x--)
	{
		printf("%d\n", numbers[x]);
	}

	return 0;
}
