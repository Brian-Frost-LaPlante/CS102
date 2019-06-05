#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x;
	int *p1, *p2;

	printf("How many integers will you enter? ");
	scanf("%d",&x);

	p1 = (int *) malloc(sizeof(int) * x);
	if (p1 == NULL)
	{
		printf("NOTE ENOUGH MEMORY!\n");
		return 1;
	}

	for (p2 = p1; p2 < p1+x; p2++)
	{
		printf("Enter a number: ");
		scanf("%d",p2);
	}

	for (p2 = p1+x-1; p2>=p1; p2--)
		printf("%d\n",*p2);
	
	free(p1);

	return 0;
}
