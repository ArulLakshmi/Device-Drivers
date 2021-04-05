#include <stdio.h>
#include <stdlib.h>
int main() 
{
	char lines[1000];

	// creating a file pointer to work with files
	FILE *fptr;

	// creating a file and opening in write mode
	/*It tries to  create a file in /sys directory which is the interface to the kernel 
	and this results in error as a process cannot directly access the kernel space*/ 
	fptr = fopen("/sys/program.txt", "w");

	printf("Enter a line to be added to the file:\n");

	fgets(lines, sizeof(lines), stdin);

	fprintf(fptr, "%s", lines);

	fclose(fptr);//closing the file
	
	return 0; //exiting program
}



