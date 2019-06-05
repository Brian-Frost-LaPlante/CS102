#include <stdio.h>

int x = 5;

void alter(int);

int main(void)
{
	int y = 5;
	printf("In function main, x = %d, y = %d.\n",x,y);
	alter(y);
	printf("Now in function main, x = %d, y = %d.\n",x,y);

	return 0;
}

void alter(int y)
{
	x++;
	y++;
	printf("In function alter, x = %d, y = %d.\n",x,y);
	return;
}
