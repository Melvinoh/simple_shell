#include "shell.h"
/*
 * hundle_builtins - function to hundle builtin commands 
 * @args - comand to be searched for
 * return 1 on success
 *
 */

int hundle_builtins( char **args)
{
	builtins my_builtins[];
	my_builtins[]=
	{
		{"cd", cd()},
		{"exit", exit()},
		{"env", env()},
		{"setenv",setenv()},
		{"unsetenv",unsetenv()}
	}

	while (my_builtins[i].name != NULL)
	{
		if(strcmp(arg[0], my_builtins[i].name) == 0)
		{
			return my_builtins[i].(fun)(args);

		}

	}



}



