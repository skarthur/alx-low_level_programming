#include "main.h"
#include <stdlib.h>

/**
 * _strchr - Locates a character in a string
 *
 * @s: the string to check
 * @c: the character to find
 *
 * Return: A pointer to the first occurrence of the character, Null otherwise
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}

	if (c == '\0')
		return (s);

	return (NULL);
}
