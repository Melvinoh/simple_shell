#include "shell.h"
/**
 * unsetenv - function to remove an aenviroment variable
 * @args:- parsed tokens from input
 * return: 1 on success and -1 on failure
 */
int unsetenv(char **args)
{
	char *var = args[2];
	env_list *env = env_list *head;
	env_list *holder = NULL;
	char *p;

	while (env)
	{
		p = find_needle(env->str, var);

		if (p && *p == '=')
		{
			if (!env || !(env->next))
				return (-1);
			holder = env->next;
			env->next = holder->next;
			free(holder);
		}
		env = env->next;
	}
	return (1);
}

/**
 * env - function that prints the str elements of the enviroment list
 * @head - pointer to the first node in the list
 * return: size of list
 */
int env(char **args)
{
	int i = 0;
	env_list *head;
	char *var = *args[2];

	while (head)
	{
		_puts(head->str ? head->str : "no env variables");
		_puts("\n");
		head = h->next;
		i = i + 1;

	}
	return (i);
}

