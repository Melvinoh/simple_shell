#include"stdio.h"
#include "shell.h"
/*
 * @prompt - prints $ to prompt user to enter comand
 * return - void always 
 *
 */

void user_prompt()
{
	int initmode = isatty(STDIO_FILENO);
	if (initmode == 1)
	{
		write(STDIO_FILENO, "_$_");
		
	}else 
	{
		printf("could not initiate shell");
	}
}
