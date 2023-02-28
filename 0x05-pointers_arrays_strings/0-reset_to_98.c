#include "main.h"

/**
 * reset_to_98 - takes a pointer to an int as parameter
 * and updates the value it ppoints to 98
 * @n: integer input
 * Return: Always 0
 */

void reset_to_98(int *n)
{
	int n;
	*n = 98;

	_putchar(*n + '0');
	return (0);
}
