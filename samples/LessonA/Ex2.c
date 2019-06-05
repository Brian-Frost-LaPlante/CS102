#include <stdio.h>

int main(void)
{
	FILE *fpInput, *fpOutput;
	char name[20];
	int t1, t2, t3;
	float average;
	
	fpInput = fopen("grades.txt", "r");
	if (fpInput == NULL)
	{
		printf("File grades.txt does not exist.\n");
		return 1;
	}
	fpOutput = fopen("fgrades.txt", "w");
	if (fpOutput == NULL)
	{
		printf("Could not open output file.\n");
		return 1;
	}

	while(fscanf(fpInput, "%s %d %d %d", name, &t1, &t2, &t3) != EOF)
	{
		average = (t1 + t2 +t3)/3.0;
		fprintf(fpOutput, "%s\t%f\n", name, average);
	}

	fclose(fpInput);
	fclose(fpOutput);

	return 0;
}
