#include "shell.h";

/**
 * readline1 - a function that reads inputline from terminal using getline
 * return: pointer to line;
 *
 */
char *readline1(void)
{
	char *line = NULL;
	ssize_t bufsize = 0;
	if (_getline(&line, &bufsize,STDIN_FILENO) == -1)
	{
		if(feof(stdin))
		{
			exit(EXIT_SUCCESS);
		}else {
			perror("readline");
			exit(EXIT_FAILURE);
		}
	}
	return line;
}
