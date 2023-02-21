#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int n;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}

		-putchar('\n');

	}
}
