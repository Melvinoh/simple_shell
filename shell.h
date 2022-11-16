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
	struct aliases *next;
} alias;

typedef struct builtins
{
	char *name;
	int (*func)(char **args);
} builtins

int cd(char **args);
int _env(char **args);
int _unsetenv(char **args);
int _setenv(char **args);
int _getenv(char **args);
int _exit(char **args);
int _alias(char **args);
int add_alias(char **args);
int remove_alias(char **args);
char *getline(char *line[], ssize_t *buffer, FILE *stream);
char *readline1(void);
char *handle_builtins(char **args);
char **tokenizer(char *line);

#endif


