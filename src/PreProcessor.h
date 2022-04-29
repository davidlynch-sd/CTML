char *noSpace(FILE *input)
{
	fseek(input,0,SEEK_END);
	int len = ftell(input);

	char *buffer = malloc(len);

	//Writes our buffer to NULL	
	for(int i = 0; i < len; i++)
	{
		*(buffer + i) = '\0';
	}
	int index = 0;
	while(!feof(input))
	{
		char c = fgetc(input);
		switch (c)
		{
			case 10:
			{
				*(buffer + index) = '\0';	
				break;
			}
			case 9:
			{
				*(buffer + index) = '\0';	
				break;
			}
			case 8:
			{
				*(buffer + index) = '\0';	
				break;
			}
			case 11:
			{
				*(buffer + index) = '\0';	
				break;
			}
			case 13:
			{
				*(buffer + index) = '\0';	
				break;
			}
			case 32:
			{
				*(buffer + index) = '\0';	
				break;
			}
		}
		*(buffer + index) = c; 
		index++;
	}
	return buffer;
}
