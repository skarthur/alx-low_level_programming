#include "main.h"

/**
 * print_alphabet - Prints the alphabets in lowercase
 *
 * Return: void
 */

void print_alphabet(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
