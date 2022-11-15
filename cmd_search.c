#include "shell.h"

/**
 * cmd_search - function to search for cmds in paths
 * @args: commands to be searched
 * @paths: pointer to path variables
 * return: full path of the excecutable
 *
 */
char *cmd_search(char **paths, char **args)
{
	char *cmd = *args[0];
	char *temp
	struct stat st;
	int i = 0,j = 0 k = 0, p;


	while (*paths[i])
	{
		j = strlen(*paths);
		k = strlen(*cmd);
		temp = malloc((j+k) * sizeof(char));
		if (!temp)
			perror("temp");

		 p = stat(temp, st);

		 if(p == 0)
			return (temp);

		 i++;
	}
	
}




