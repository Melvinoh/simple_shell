#include "shell.h"
/**
 * remove_alias - function to remove an alias
 * @args: array of arguments recieved
 * Return: 1 on success and -1 on failure
 */
int remove_alias(char **args)
{
	char *var = args[1];
	alias *head = alias;
	alias *holder = NULL;
	char *p;

	if (!var)
		return (-1);
	while (head)
	{
		p = strcmp(head->alias_name, var);

		if (p == 0)
		{
			if (!head || !(head->next))
				return (-1);
			holder = head->next;
			head->next = holder->next;
			free(holder);

			break;
		}
		head = head->next;
	}
	return (1);
}

/**
 * _alias - function that prints the str elements of the alias list
 * @args: array of arguments recieved
 * Return: 1 if success and -1 if failure
 */
int _alias(char **args)
{
	int i = 0, argc = 0;
	alias **head = aliases;
	char *p, *s;
	char *var = *args[1];

	while (**args)
		argc++;

	if (argc == 1)
	{
		while (head)
		{
			print_alias(head);
			head = head->next;
		}
		return (1);

	}
	if (argc > 1)
	{
		while (*args[i] < argc)
		{
			for (i = 0; args[i]; i++)
			{
				head = aliases;
				while (head)
				{
					if (_strcmp(args[i], head->alias_name == 0))
					{
						print_alias(head);
						break;
					}
					head = head->next
				}
			}
			argc++;
		}
	}
	return (1);
}

/**
 * add_alias - function that adds alias variable to the alias list
 * @args: array of arguments passed
 * Return: always 1 if success and -1 if failure;
 */
int add_alias(**args)
{
	int i = 0 len;
	char *var = *args[1];
	alias **newalias, **head = alias;


	newalias  = malloc(sizeof(alias));
	len = strlen(var)


	while (head)
	{
		p = find_needle(head->alias_name, var);

		if (p)
			free(head->alias_name);
			head->alias_name = malloc(len * sizeof(char));
	}

	if (newenv != NULL)
	{
		token = tokenizer(var);
		newalias->alias_name = strdup(*token[0]);
		newalias->alias_value = strdup(*token[1]);
		newalias->next = NULL;
	} else
	{
		free(newalias);
	}

	if (*head == NULL)
		*head = newalias;
		return (1);

	while (head->next)
		head = head->next;
	head->next = newalias;
}

/**
 *print_alias - function that prints aliases
 *@head: alias to be printedi
 *Return: void
 */
void print_alias(alias *head)
{
	char *s;
	int len = _strlen(head->name) + _strlen(head->value) + 4;

	str = malloc(sizeof(char) * len);
	if (!s)
		return;
	strcpy(s, head->name);
	strcat(s, '=');
	strcat(s, head->value);
	strcat(s, '\n');
	if (s != NULL)
	{
		write(STDOUT_FILENO, s, len);
		free(s);
	}

}


