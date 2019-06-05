// This program prints a times table for integers between 0 and 9

#include <stdio.h>

int main(void)
{
	int row, col;

	printf("\t0\t1\t2\t3\t4\t5\t6\t7\t8\t9\n");
		for (row = 0; row <= 9; row++)
		{
			printf("%d", row);
			for (col = 0; col <=9; col++)
			{
				printf("\t%d",col*row);
				if (col==row)
					break;
			}
			printf("\n");
		}
	
	return 0;
}
