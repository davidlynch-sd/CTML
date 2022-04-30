/*		CTML
 *
 *		DAVID LYNCH
 *
 *		29/4/22
 *		https://github.com/davidlynch-sd/CTML
 */

#include <stdio.h>
#include <stdlib.h>
#include "CTML.h"

int main(int argc, char **argv)
{
	FILE *input = fopen(argv[2],"r");
	FILE *output = fopen(argv[1],"w+");
	
	if(!input || !output) return 1;
	
	ctmlCompile(input,output);
	
	fclose(input);
	fclose(output);

	return 0;
}
