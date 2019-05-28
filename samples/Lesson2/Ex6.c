#include <stdio.h>
#define PI 3.14159

int main(void)
{

	printf("We start with x = 5\n");

	int y, x=5;
	y = x++;
	printf("I wrote y=x++, I get x=%d, y=%d\n",x,y);
	
	x=5;
	y = ++x;
	printf("I wrote y=++x, I get x=%d, y=%d\n",x,y);
	
	x=5;
	y = x--;
	printf("I wrote y=x--, I get x=%d, y=%d\n",x,y);
	
	x=5;
	y = --x;
	printf("I wrote y=x++, I get x=%d, y=%d\n",x,y);

	return 0;
}
