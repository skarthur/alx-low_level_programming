#include "main.h"

/**
 * print_line - Draws a straight lin in the terminal
 * @n: number of times the character '_' should be printed
 * Return: Always 0
 */

void print_line(int n)
{
	char c = '_'

	if (n <= 0)
		_putchar('\n');

	else
		_putchar(n * c);
	_putchar('\n');
}
