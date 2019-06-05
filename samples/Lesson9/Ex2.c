#include <stdio.h>

int main(void)
{
	char name[20];
	while(1)
	{
		printf("Please enter your name: ");
		scanf("%19s",name);
	
		printf("Hello %19s, nice to meet you!\n", name);
		
		while(getchar() != '\n');
	}
	return 0;
}
