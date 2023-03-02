#include "main.h"

/**
 * _strcat - Concatenates two strings
 *
 * @dest: Pointer to destination
 * @src: Pointer to source
 *
 * Return: The concatenation of the two strings
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; ++i)
		;

	for (j = 0; src[j] != '\0'; ++j, ++i)
	{
		dest[i] = src[j];
	}

	dest[i] = '\0';
	return (dest);

}
