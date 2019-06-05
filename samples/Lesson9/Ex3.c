#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	char line[40];
	char c;
	char *pc, *up;
	int length;
	int i;

	while(1)
	{
		// GET A LINE
		i = 0;
		c = getchar();
		while (c != '\n')
		{
			line[i] = c;
			c = getchar();
			i++;
		}
		line[i] = '\0';

		// Check for "quit"
		if (!strcmp(line,"quit"))
		{
			printf("Bye!\n");
			break;
		}
		
		// Free up space for our uppercase version
		length = strlen(line);
		up = (char *) malloc(sizeof(char)*(length+2));
		
		// Create uppercase version
		for (pc = line; pc-line < length; pc++)
		{
			up[pc-line] = toupper(*pc);
		}
		up[length] = '\n';
		up[length+1] = '\0';


		printf("%s",up);
	}

	return 0;
}
