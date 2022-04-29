/*		CTML 
 *
 *		DAVID LYNCH
 *
 *		29/4/22
 *
 */



//Stack will be char *[length] 
typedef struct elStack
{
	int len;
	char **names;
} elStack;




void elPush(elStack Stack,char *input)
{
	int i = 0;

	//traverses the stack
	while(*(Stack.names + i) != NULL)
		i++;


	//Writes input to the stack
	if(i < Stack.len)
		*(Stack.names + i) = input;
}

char *elPop(elStack Stack)
{	
	int i = 0;

	while(*(Stack.names + i) != NULL)
		i++;
	if(i != 0)
	{
		char *buff = *(Stack.names + i);
		*(Stack.names + i) = NULL;
		return buff;
	}
}
