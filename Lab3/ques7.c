#include <stdio.h>
#include <stdlib.h>
int main() 
{
	char lines[1000];

	// creating a file pointer to work with files
	FILE *fptr;

	// creating a file and opening in write mode
	fptr = fopen("/sys/program.txt", "w");

	printf("Enter a line to be added to the file:\n");

	fgets(lines, sizeof(lines), stdin);

	fprintf(fptr, "%s", lines);

	fclose(fptr);//closing the file
	
	return 0; //exiting program
}



