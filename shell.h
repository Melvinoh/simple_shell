# ifndef SHELL_H
# define SHELL_H

# include "stdio.h"
#include "unistd.h"
#include "string.h"
#include "sys.h"
#include "time.h"
#include "stdbool.h"

#define BUFFER = 1024
#define DELIM = " :\t\r\n\a"

extern char **environ;

typedef struct aliases
{
	char *alias_name;
	char *real_name;
} alias;

typedef struct builtins
{
	char *name;
	int (*func)(char **args);
} builtins

int cd(char **args);
int env(char **args);
int unsetenv(char **args);
int setenv(char **args);
int exit(char **args);
int alias(char **args);
char *getline(char *line[], ssize_t *buffer, FILE *stream);
char *readline1(void);
char *handle_builtins(char **args);
char **tokenizer(char *line);

#endif


