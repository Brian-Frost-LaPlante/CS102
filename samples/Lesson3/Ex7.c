#include <stdio.h>

int main(void)
{
	char grade;

	printf("Enter your desired grade in CS-102: ");
	scanf("%c",&grade);

	if ((grade == 'A') || (grade == 'a'))
		printf("We both hope as much \n");
	else if ((grade == 'B') || (grade == 'b')) 
		printf("Modesty is a virtue\n");
	else if ((grade == 'C') || (grade == 'c')) 
		printf("The center of a bell curve is never a lonely place to be\n");
	else if ((grade == 'D') || (grade == 'd')) 
		printf("As long as you\'re passing\n");
	else if ((grade == 'F') || (grade == 'f')) 
		printf("Bad!\n");
	else
		printf("That isn\'t even a grade!\n");

	return 0;
}
