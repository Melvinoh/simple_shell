#include " shell.h"

/**
 * main - function that runs the shell
 * @agrc - argument count
 * @argv - vector of arguments
 * return: always 0
 *
 */
int main(int argc, char *argv[])
{
	do {
		user_prompt();
		line = readline(void);
		args = tokenizer(line);
		status = exceute(args);

		free(line);
		free(args);

	} while (status);

	return (0);
}
