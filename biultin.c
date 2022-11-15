#include "shell.h"

/**
 * cd function to change dir
 * @args - passsed arguments to cd
 * return: always 1 on success 
 */
int cd(char **args)
{
	if (arg[1] == NULL)
	{
		chdir($HOME);
	} else {
		if (*agrs[1] == '-')
		{
			chdir($OWD);
		}
	}else {
		if(chdir(args[i] != 0))
		{
			perror( "hsh" );
		}
	}
	return (1);
}

