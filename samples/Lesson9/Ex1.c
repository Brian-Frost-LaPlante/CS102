#include <stdio.h>

int main(void)
{
	char name[20];

	printf("Please enter your name: ");
	scanf("%s",name);

	printf("Hello %s, nice to meet you!\n", name);

	return 0;
}
