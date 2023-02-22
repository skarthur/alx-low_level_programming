#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * Return: the times table line by line
 */

void times_table(void)
{
	int num, digit, x;

	num = 0;

	while (num <= 9)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		digit = 0;

		while (digit <= 9)
		{
			x = (num * digit);

			if ((x / 10) > 0)
			{
				_putchar((d / 10) + '0');
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
			digit++;
		}
		num++;

		_putchar('\n');
	}
}
