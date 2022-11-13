#include "shell.h"
#define BUFFER 1024
ssize_t*readline(char *lineptr[], ssize_t *buff ,FILE *stream)
{
	ssize_t *buff = BUFFER;
	int i = 0;
	char *lineptr = malloc(sizeof(char) * buff);
	
	if (!lineptr)
	{
		fprint(stderr, "_csh: allocation error");
		exit(EXIT_FAILURE);
	}
	while(STDIN_FILENO)
	{
		c = getchar();

		if  ( c == EOF || c == '\n')
		{
			lineptr[i] = '\0';
			return lineptr;
		}else {
			lineptr[i] = c;
		}
		i++;

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
	}
}







