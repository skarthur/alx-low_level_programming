#include "main.h"

/**
 * _strncpy - Copies a string
 *
 * @dest: Pointer to destination
 * @src: Pointer to source
 * @n: Number of bytes from src
 *
 * Return: The copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; ++i)
		dest[i] = src[i];

	for (; n > i; ++i)
	{
		dest[i] = '\0';
	}

	return (dest);

}
