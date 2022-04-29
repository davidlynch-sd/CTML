
void ctmlCompile(FILE *input, FILE *output)
{
	while(fgetc(input) != EOF)
		printf("%c",fgetc(input));
}
