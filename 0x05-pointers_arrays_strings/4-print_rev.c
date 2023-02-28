#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: pointer to s
 * Return: void
 */

void print_rev(char *s)
{
	int count = 0;

	while (s[count] != '\0')
		count += 1;

	for (count -= 1; count >= 0; count--)
		_putchar(s[count]);

	_putchar('\n');
}
