#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to s
 * Return: length of string
 */

int _strlen(char *s)
{
	int count = 0;

	for (; *s != '\0'; s++)
		count += 1;

	return (count);
}
