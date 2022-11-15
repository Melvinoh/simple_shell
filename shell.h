# ifndef SHELL_H
# define SHELL_H

# include "stdio.h"
#include "unistd.h"
#include "string.h"
#include "sys.h"
#include "time.h"
#include "stdbool.h"
 
typedef struct aliases
{
	char *alias_name;
	char *real_name;
} alias ;

typedef struct builtins
{
	char *name;
	int (*func)(char **args);
} builtins

/*

