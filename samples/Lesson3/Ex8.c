#include <stdio.h>

int main(void)
{
	char grade;

	printf("Enter your desired grade in CS-102: ");
	scanf("%c",&grade);

	switch(grade)
	{

	case 'a': case 'A':
		printf("We both hope as much \n");
		break;

	case 'b':case'B':	
	case 'c': case 'C':		
	case 'd': case 'D':
		printf("As long as you\'re passing\n");
		break;

	case 'f': case 'F':	
		printf("Bad!\n");
		break;	

	default:
		printf("That isn\'t even a grade!\n");
		break;
	}

	return 0;
}
