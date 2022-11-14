#include "shell.h";
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
