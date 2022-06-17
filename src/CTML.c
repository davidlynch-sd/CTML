/*		CTML
 *
 *		DAVID LYNCH
 *
 *		29/4/22
 *		https://github.com/davidlynch-sd/CTML
 */

#include "EleStack.h"
#include "PreProcessor.c"
#include "data.h"

void CTML(FILE *input, FILE *output)
{
	int opcount = 0;
	int clcount = 0;
	
	fseek(input,0,SEEK_END);
	int flen = ftell(input);
	fseek(input,0,0);
	//syntax checking

	char *srcText = noSpace(input);
	elStack Stack;	

	Stack.len = opcount;
	Stack.names = malloc(sizeof(char*) * Stack.len);
	
	puts(srcText);

	free(srcText);
}

