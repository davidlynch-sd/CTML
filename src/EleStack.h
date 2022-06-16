
typedef struct elStack
{
	int len;
	char **names;
}elStack;

char *elPop(elStack);
void *elPush(elStack);
char **extractTags(char*);
