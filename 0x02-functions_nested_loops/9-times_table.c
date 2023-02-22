#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * Return: the times table line by line
 */

void times_table(void)
{
	int num, digit, x;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (digit = 1; digit <= 9; digit++)
		{
			x = (num * digit);

			if ((x / 10) > 0)
			{
				_putchar((x / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}

			if (digit < 9)
			{
				_putchar(',');
				_putchar(' ');

			}
		}

		_putchar('\n');
	}
}
