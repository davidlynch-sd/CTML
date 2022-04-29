#include "EleStack.h"
#include "PreProcessor.h"

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
		printf("%s\n",srcText);
		elStack Stack;	

		Stack.len = opcount;
		Stack.names = malloc(sizeof(char*) * Stack.len);
	}


	printf("{:%d}:%d",opcount,clcount);
}
