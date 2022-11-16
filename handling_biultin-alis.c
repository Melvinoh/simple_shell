#include "shell.h"

/**
 * hundle_builtins - function to hundle builtin commands
 * @args: comand to be searched for
 * Return: a pointer to function
 */
char *hundle_builtins(char **args)
{
	builtins my_builtins[];

	my_builtins[] = {
		{"cd", _cd()},
		{"exit", _exit()},
		{"env", _env()},
		{"setenv", _setenv()},
		{"unsetenv", _unsetenv()},
		{NULL, NULL}
	}

	while (my_builtins[i].name != NULL)
	{
		if (strcmp(arg[0], my_builtins[i].name) == 0)
		{
			return (my_builtins[i].(fun)(args));

		}

	}
}


/**
 * hundle_aliases - function that aliases with original commands
 * @args: array of arguments passed
 * @myalias: linked list of alias type
 * Return: pointer to an allias realname or null if does not exit
 */
char *handle_alias(alias **myalias, char **args)
{
	int i = 0;

	while (myalias)
	{
		if (strcmp(args[0], myalias->alias_name) == 0)
			return(*myalias->value);
		myalias = myalias->next;
	}
	return (NULL);
}





