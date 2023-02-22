#include "main.h"

/**
 *print_times_table - prints the n times table, starting with 0
 * @n: number input
 * Return: the times table line by line
 */

void print_times_table(int n)
{
	int num, y, z;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');

			for (y = 1; y <= n; y++)
			{
				_putchar(',');
				_putchar(' ');

				z = (num * y);

				if (z <= 99)
					_putchar(' ');
				if (z <= 9)
					_putchar(' ');

				if (z >= 100)
				{
					_putchar((z / 100) + '0');
					_putchar(((z / 10)) % 10 + '0');
				}
				else if (z <= 99 && z >= 10)
				{
					_putchar((z / 10) + '0');
				}
				_putchar((z % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
