#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: pointer to string
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
