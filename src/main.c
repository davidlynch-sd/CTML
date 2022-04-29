#include <stdio.h>
#include <stdlib.h>
#include "ctml.c"

int main(int argc, char *argv[])
{

	for(int i = 1; i < argc; i++)
	{
		printf("[%d], %s\n",i,argv[i]);
	}


	return 0;
}

