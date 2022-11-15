#include "shell.h"

/**
 * @prompt - prints $ to prompt user to enter comand
 * return - void always
 *
 */
void user_prompt(void)
{
	int initmode = isatty(STDIO_FILENO);

	if (initmode == 1)
		write(STDIO_FILENO, "_$_");
	printf("could not initiate shell");
}
