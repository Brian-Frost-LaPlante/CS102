#include <stdio.h>
#include <math.h>

int main(void)
{
	float x;
	
	printf("Enter a positive number: ");
	scanf("%f",&x);

	if (x>0)
	{
		float y;

		y = sqrt(x);
		printf("Square Root of %f is approximately %f\n",x,y);
		
		if(y>10)
			printf("My, what a large square root!\n");
		else
			printf("Not a very large square root\n");
	}
	else
	{
		printf("That is not a positive number!\n");
		
		if(x<-10)
			printf("It is quite large in absolute value however!\n");
	}
	return 0;
}
