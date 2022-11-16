#include "shell.h"

/**
 * _setenv - function that adds enviroment variable or modify existing 
 * @args: array of arguments passed
 * return: alway 1 on success and -1 on failure
 */
int _setenv(char **args)
{
	char **env = environ, **new_env;
	int i, j,len1,len2;
	char *var1 = *args[1];
	
	if(args[2] != NULL)	
	{
		len2 = strlen(*args[2]);
		newval = malloc(sizeof(char) *(len1 + len2 + 2));
		if (!newval)
			return (-1);
		strcpy(newval,args[1]);
		strcat(newval, '=');
		strcat(newval,*args[2]);
	}
	newval = malloc(sizeof(char) * len1);
	if(!newval)
		fprint(stderr, "hsh: memory alocation error");
	if (strcpy(newval, args[1]) == 0)
		return (1);
	for (i = 0; env[i]; i++)
	{
		len = strlen(*var);
		if(strncmp(*var, *env[i], len) == 0)
		{
			free(*env[i]);
			*env = newval;
		}
		i++;
	}
	*env[i] = newval;
	*env[i + 1] = NULL;
	free(newval);
	return (1);
}

/**
 * unsetenv - function that removes a variable from enviroment
 * @args: array of arguments passed
 * return: 1 on success and -1 on failure
 */
int _unsetenv(char **args)
{
	char **envar, **new_environ;
	ssize_t i;
	int j,k;
	if (!args[0] && !args[2])
		return (-1);

	envar = _getenv(args[1]);
	if (!envar)
		return (-1);
	i = 0
	while (environ[i])
		i++;
	new_environ = malloc(sizeof(char *) * i);
	if (!new_environ)
		return (-1);

	for (j = 0, k = 0; environ[j]; j++)
	{
		if (*envar == environ[j])
		{
			free(*envar);
			continue;
		}
		new_environ[k] = environ[j];
		j++;
	}
	free(environ);
	environ = new_environ;
	environ[i - 1] = NULL;
	return (0);
}

/**
 * _env - function that prints the current enviroment
 * @args: array of arguments passed in c
 * return: 1 on success and -1 on failure
 *
 */
int _env(char **args)
{
	int i;
	char nl = '\n';
	if (!environ)
		return (-1);
	for (i = 0; environ[i]; i++)
	{
		write(STDOUT_FILENO, environ[i], strlen(environ[i]));
		write(STDOUT_FILENO, &nc, 1);
	}
	(void)args;
	return (1);
}

/**
 * _getenv - gets the specified enviroment variable 
 * @var: varible to be searched ;
 * Return: pointer to the env varialble if exits, null if does not
 *
 */
char **_getenv(const char *var)
{
	int i, len;

	len = _stlen(var);
	for(i = 0; environ[i]; i++)
	{
		if (strncmp(var, environ[i], len) == 0)
			return (&environ[i]);
	}
	return (NULL);
}













