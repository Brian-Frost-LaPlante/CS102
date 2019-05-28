#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(0));
	int x;
	x = rand()%100;

	printf("Random Number: %d\n",x);	

	return 0;
}
