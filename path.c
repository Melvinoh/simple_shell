#include "shell.h"

/** _paths - function to paths in which command will be searched
 * @args : passed commands to the function
 * return: pointer to paths on success and -1 on failure
 */
char **_paths(void)
{
	char **paths = NULL, **env = environ;
	int i, p, j;
	char *var = 'PATH=', *path = NULL;

	while (*env[i] != NULL)
	{
		p = strncmp(*env, var, 5);
		if (p == 0)
		{
			path = *env;
			while (*path && x < 5)
			{
				path++;
				x++;
			}
			paths = tokenizer(path);
			return (paths);
		}
		i++;
	}
	return (-1);
}



