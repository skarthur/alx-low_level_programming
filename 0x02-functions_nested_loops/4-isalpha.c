#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: character input
 * Return: 1 if c is a letter, 0 if otherwise
 */

int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A')  && (c <= 'Z')))
		return (1);
	else
		return (0);
}
