#include <stdio.h>
#include <stdlib.h>
#include "ctml.c"

int main(int argc, char *argv[])
{
	FILE *input = fopen(argv[2],"r");
	FILE *output = fopen(argv[1],"w+");
	
	FILE *output = ctmlCompile(input);
	ctmlCompile(input,output);

	fclose(input);
	fclose(output);

	return 0;
}

