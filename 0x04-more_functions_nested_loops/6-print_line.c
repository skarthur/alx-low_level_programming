#include "main.h"

/**
 * print_line - Draws a straight lin in the terminal
 * @n: number of times the character '_' should be printed
 * Return: Always 0
 */

void print_line(int n)
{
	int i;
	char c = '_'

	if (n <= 0)
		_putchar('\n');

	else
		for (i = 1; i <= n; i++)
		{
			_putchar(c);
		}
	_putchar('\n');
}
