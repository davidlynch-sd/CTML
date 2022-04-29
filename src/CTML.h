#include "EleStack.h"

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
		elStack Stack;	

		Stack.len = opcount;
		Stack.names = malloc(sizeof(char*) * Stack.len);
	}


	printf("{:%d}:%d",opcount,clcount);
}
