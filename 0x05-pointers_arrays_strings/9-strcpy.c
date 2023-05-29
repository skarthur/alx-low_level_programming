#include "main.h"

/**
 * _strcpy - Copy a string
 * @dest: pointer to destination
 * @src: pointer to source
 * Return: the value of dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i++] = '\0';

	return (dest);
}
