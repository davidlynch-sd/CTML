
void ctmlCompile(FILE *input, FILE *output)
{
	while(!feof(input))
		printf("%c",fgetc(input));
}
