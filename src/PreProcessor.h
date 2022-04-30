/*		CTML
 *
 *		DAVID LYNCH
 *
 *		29/4/22
 *		https://github.com/davidlynch-sd/CTML
 */



//Function to eliminate whitespace from the source file, essentially making the entire program one line
char *noSpace(FILE *input)
{
	//determines the length of the file
	fseek(input,0,SEEK_END);
	int len = ftell(input);
	fseek(input,0,0);

			
	char *buffer = malloc(len);	
	int index = 0;
	char c;
	while(!feof(input))
	{
		c = fgetc(input);
		if(c == ' ' || c == '\t' || c == '\n')
			puts("IS SPACE\n");
	}

	puts(buffer);

	return "CTML";
}
