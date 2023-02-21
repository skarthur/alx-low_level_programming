#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: letter input
 * Return: 1 if c is lower case, 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
