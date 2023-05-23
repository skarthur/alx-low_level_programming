#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @c: number input
 *
 * Return: last digit
 */

int print_last_digit(int c)
{
	int x;

	x = c % 10;
	if (x < 0)
		x /= -1;
	_putchar(x + '0');

	return (x);
}
