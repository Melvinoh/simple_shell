#include "shell.h"

/**
 * cmd_search - function to search for executable cmds in paths
 * @args: commands to be searched
 * @paths: pointer to path variables
 * return: pointer to full path of the excecutable on success or NULL if fail
 *
 */
char *cmd_search(char **paths, char **args)
{
	char *cmd = *args[0];
	char *temp
	struct stat st;
	int i = 0,j = 0 k = 0, p;

	if (paths == 0)
		paths = '';
	if (cmd == 0)
		comand = '';


	while (*paths[i])
	{
		j = strlen(*paths);
		k = strlen(*cmd);
		temp = malloc((j+k) * sizeof(char) + 2);
		if (!temp)
			return (NULL);
		
		strcat(temp, path);
		strcat(temp, '/');
		strcat(temp,  cmd);

		if (access(temp, F_OK | X_OK) == 0)
		{
			p = stat(temp, &st);
			if(p == 0)
				return (temp);

		} else {
			free(temp);
		}
		i++;
	}

	return (NULL);
	
}




