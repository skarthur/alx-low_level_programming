#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 *
 * @c: integer value
 *
 * Return: 0
 */

int _abs(int c)
{
	if (c < 0)
		return (c * -1);
	else
		return (c);
}
