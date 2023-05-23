#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabets in lowercase
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int j = 0;

	while (j < 10)
	{
		char i = 'a';

		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		j++;
	}
}
