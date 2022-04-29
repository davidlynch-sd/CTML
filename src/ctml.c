
void ctmlCompile(FILE *input, FILE *output)
{
	while(!feof(input))
	{
		char c = fgetc(input);
		printf("%c",c);
	}
}
