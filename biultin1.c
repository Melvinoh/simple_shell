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
	char *p;
	char *var = *args[2];

	while (head)
	{
		p = find_needle(head->str, var);
		if (p != NULL)
		{
			_puts(head->str);
			_puts("\n");
		}
		_puts(head->str ? head->str : "no env variables");
		_puts("\n");
		head = h->next;
		i = i + 1;

	}
	return (i);
}

/**
 * setenv - function that adds enviroment variable tothe enviroment
 * @args:arguments passed
 * return: pointer to the last node in the list
 */
void setenv(**args)
{
	int i = 0;
	char *var = *args[2];
	env_list *newenv, *env;
	env_list **head;

	newenv  = malloc(sizeof(env_list));
	env = envlist head;

	while (env)
	{
		p = find_needle(env->start, var);

		if (p)
			free(env->str);
			env->str = malloc(len * sizeof(char));
	}

	if (newenv != NULL)
	{
		newenv->str = strdup(*var);
		newenv->len = strlen(*var);
		newenv->next = NULL;
	} else
	{
		free(newenv);
	}

	if (*head == NULL)
		*head = newenv;
		return (newenv);

	while (env->next)
		env = env->next;
	env->next = newenv;
}
