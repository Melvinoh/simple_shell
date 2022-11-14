#include "shell.h"
#define BUFFER 1024
char *getline(char *lineptr[], ssize_t *buff ,FILE *stream)
{
	ssize_t *buff = BUFFER;
	int r, i = 0;
	char *lineptr;
	char *c[];


	if (i == 0)
		fflush(stream);
	else 
		return(-1);

	lineptr = malloc(sizeof(char) * *buff);


	if (!lineptr)
	{
		fprint(stderr, "_csh: allocation error");
		exit(EXIT_FAILURE);
	}
	
	do
	{
	 	 r = read(STDIN_FILENO,&c,1);
		 if (r == -1 || r == 0 )
		 {
			 free(lineptr);
			 return (-1);
		 }
		 if (r == 0 && i != 0)
		 {
			 lineptr[i] = c;
			 i++;
		 }
	}while(*c != '\n');
	
	if ( i >= buff)
	{
		buff += buff;
		lineptr = realloc(lineptr , buff);
		if (!lineptr)
		{
			fprint( stderr, "_csh: allocation error");
			exit(EXIT_FAILURE);
		}
	}
	lineptr[i] = '\0';

	return lineptr;



}







