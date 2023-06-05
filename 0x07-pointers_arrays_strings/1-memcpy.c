#include "main.h"

/**
 * _memcpy - Copies memory area
 *
 * @dest: Destination of copied memory
 * @n: the number of bytes
 * @src: Memory area to copy
 *
 * Return: a pointer destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
