/*		CTML
 *
 *		DAVID LYNCH
 *
 *		29/4/22
 *		https://github.com/davidlynch-sd/CTML
 */

#include <stdio.h>
#include <stdlib.h>
#include "CTML.c"

int main(int argc, char **argv)
{
	FILE *input = fopen(argv[2],"r");
	FILE *output = fopen(argv[1],"w+");
	
	if(!input) 
	{	
		fprintf(stderr, "No input file provided");
		exit(1);
	}
	if(!output)
	{
		fprintf(stderr, "ERROR: Output file couldn't be created");
		exit(1);
	}
	
	CTML(input,output);
	
	fclose(input);
	fclose(output);

	return 0;
}
