#include "main.h"

/**
 * _strncat - Concatenates two strings
 *
 * @dest: Pointer to destination
 * @src: Pointer to source
 * @n: Number of bytes from src
 *
 * Return: The concatenation of the two strings
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; ++i)
		;

	for (j = 0; src[j] != '\0' && n > 0; ++j, ++i, n--)
	{
		dest[i] = src[j];
	}

	return (dest);

}
