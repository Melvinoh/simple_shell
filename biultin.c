#include "shell.h"

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
		p = start(env->start, var);

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
	return (newenv);

