#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @c: string
 *Return: String in uppercase
 */

char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] -= 32;
	}
	return (c);
}
