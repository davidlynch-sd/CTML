/*		CTML
 *
 *		DAVID LYNCH
 *
 *		29/4/22
 *		https://github.com/davidlynch-sd/CTML
 */

#include "PreProcessor.h"

//Function to eliminate whitespace from the source file, essentially making the entire program one line
char *noSpace(FILE *input)
{
	//determines the length of the file
	fseek(input,0,SEEK_END);
	int len = ftell(input);
	fseek(input,0,0);


	char *buffer = malloc(len);

	int index = 0;
	int nulls = 0; 

	for(char c; !feof(input); c = fgetc(input))
	{	
		*(buffer + index) = c;
		index++;
		if(c == '\t' || c == '\n' || c == ' '){ index--; nulls++;}
	}
	
	buffer = realloc(buffer, len - nulls);

	return buffer;
}

