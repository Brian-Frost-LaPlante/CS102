#include <stdio.h>

int main(void)
{
	FILE *fpSource, *fpDest;
	char sname[40], dname[40];
	char c;	

	printf("Enter name of source file: ");
	scanf("%s", sname);

	fprintf(stdout, "Enter name of destination file: ");
	fscanf(stdin, "%s", dname);

	fpSource = fopen(sname,"r");
	if (fpSource == NULL)
	{
		printf("Error opening source file!\n");
		return 1;
	}
	fpDest = fopen(dname, "w");
	if (fpDest == NULL)
	{
		printf("Error opening destination file!\n");
		return 1;
	}
	
	while ((c = getc(fpSource)) != EOF)
		putc(c, fpDest);

	fclose(fpSource);
	fclose(fpDest);

	return 0;
}
