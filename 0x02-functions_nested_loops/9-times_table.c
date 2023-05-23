#include "main.h"

/**
 * times_table - prints 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int n = 0;
	int m, i;

	while (n < 10)
	{
		_putchar('0');
		m = 1;

		while (m < 10)
		{
			i = n * m;
			_putchar(',');
			_putchar(' ');
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			else
			{
				_putchar(i + '0');
			}
			m++;
		}
		_putchar('\n');
		n++;
	}

}
