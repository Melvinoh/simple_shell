#include "shell.h"

/**
 * tokenizer - gets tokens from input strings using deliminators /' ',:
 * @line - pointer to the line being splited
 * return - pointer to a string
 *
 */
char **tokenizer(char *line)
{
	char **tokens;
	int i = 0;
	char *token;
	ssize_t buffer = 120;

	tokens = malloc(buffer * sizeof(char));

	if (!tokens)
	{
		fprintf(stderr, "hsh:memorry alocation error");
		free(tokens);
		exit(ERROR_FAILURE);
	}

	token = strtok(line, DELIM);

	while (token != NULL)
	{
		tokens[i] = strdup(token);
		i++;
		if (i >= buffer)
		{
			buffer += buffer;
			tokens = realloc(tokens, buffer * sizeof(char));

			if (!tokens)
			{
				fprintf(stderr, "hsh: memmory allocation error");
				exit(EXIT_FAILURE);
				free(tokens);
			}

		}
		token = strtok(NULL, DELIM);
	}
	tokens[i] = NULL;
	return (tokens);
}


