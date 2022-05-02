/*		CTML
 *
 *		DAVID LYNCH
 *
 *		29/4/22
 *		https://github.com/davidlynch-sd/CTML
 */

#include "EleStack.h"
#include "PreProcessor.h"
#include "data.h"
void ctmlCompile(FILE *input, FILE *output)
{
	int opcount = 0;
	int clcount = 0;
	while(!feof(input))
	{	
		char c = fgetc(input);

		if(c == '{')
			opcount++;
		if(c == '}')
			clcount++;	
	}
	//syntax checking
	if(opcount == clcount)
	{
		char *srcText = noSpace(input);
		elStack Stack;	

		Stack.len = opcount;
		Stack.names = malloc(sizeof(char*) * Stack.len);

		for(int i = 0 ; i < 105; i++)
			printf("%s\t%d\n", Tags[i],i);


		

		free(srcText);
	}
}
