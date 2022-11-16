#include "shell.h"

/**
 * execute.c - function that execute commands in a child process
 * @args: an array of arguments
 * Return: always 1 on success and 0 on failure
 */
int _execute(char **args);
{
	if (args[0] == NULL)
		return (1);

