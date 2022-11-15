#include "shell.h"
/**
 * _strlen - returns the lengths of a string
 * @s: the strings whose length to check
 * return: integer length of string
 */
int _strlen(char *s)
{
	int i,n;
	for(i = 0; s[i] !="\0"; i++)
	{
		n = n + 1;
	}
	return (n);
}

/**
 * _strcmp - compares to stings 
 * @s1: pointer to first string to be compared
 * @s2: pointer to the second str to be compared
 * return: negative if s1 < s2, positive if s1 > s2, 0 if s1 == s2 
 */

int _strcmp(char *s1, char *s2)
{
	int i,j;
	while (*s1 == *s2)
	{
		if(*s1 == '\0')
			return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/**
 * find_needle - funcrion to find needle in a stack 
 * @haystack: string to search
 * @needle; substring to find
 * return: pointer to next char of haystack or null
 */
char *find_needle(const char *haystack , const char *needle)
{
	while (*needle)
	{
		if (*needle++ != *haystack++)
		{
			return (NULL)
		}
	}
	return ((char *)haystack);
}


