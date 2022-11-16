#include "shell.h"

 /**
 * _cd - function to change dir
 * @args: passsed arguments to cd
 * Return: always 1 on success
 */
int _cd(char **args)
{
	char *dir, *cwd, *pwd, *dirargs[];
	int p;

	dirargs = malloc(sizeof(char *) * 2);
	if (!dirargs)
		fprint(stderr, "memory allocation error");
	if (args == NULL)
		return (-1);
	if (arg[1] == NULL)
	{
		dir = _getenv("HOME=");
		if (dir != NULL)
		{
			p = chdir(*dir);
			if (p == 0)
			{
				cwd = getcwd(cwd, 0);
				dirargs[0] = "PWD=";
				dirargs[1] = *cwd;
				if (_setenv(dirargs) == -1)
					return (-1);
			}
		}
		fprint(stderr, "hsh:dir not found");
	}
	if (*agrs[1] == '-')
	{
		dir = _getenv("OWD=");
		if (dir != NULL)
		{
			p = chdir(*dir);
			if (p == 0)
			{
				pwd = getcwd(pwd, 0);
				dirargs[0] = "OWD=";
				dirargs[1] = *pwd;
				if (_setenv(dirargs) == -1)
					return (-1);
			}
		}
		fprint(stderr, "hsh: dir not found");
	}
	return (1);
}


/**
 * _exit - function used to quit the shell
 * @args: array of arguments passed
 * Return: 0 used to quitr the loop
 */
int _exit(char **args)
{
	free(args);
	free(line);
	exit(EXIT_SUCESS);
	return (0);
}

