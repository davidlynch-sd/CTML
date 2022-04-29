#include <stdio.h>
#include <stdlib.h>
#include "ctml.h"
#include "EleStack.h"

int main(int argc, char *argv[])
{
	FILE *input = fopen(argv[2],"r");
	FILE *output = fopen(argv[1],"w+");
	
	if(!input || !output) return 1;

	ctmlCompile(input,output);

	fclose(input);
	fclose(output);

	return 0;
}

