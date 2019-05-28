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
	}
	else
	{
		printf("That is not a positive number!\n");
	}
	return 0;
}
