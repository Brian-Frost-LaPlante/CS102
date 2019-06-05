#include <stdio.h>

int main(void)
{
	char c;
	int ndigit[10];

	for (int x=0; x<=9; x++)
		ndigit[x] = 0; // could also initialize to all zeros by hand

	while ((c=getchar()) != EOF)
	{
		if ((c>='0') && (c<='9'))
			++ndigit[c-'0']; // This segment must be thought of using ASCII -> integer arithmetic!
	}
	
	for (int x = 0; x<=9; x++)
		printf("count of %d is %d\n",x,ndigit[x]);
	return 0;
}
