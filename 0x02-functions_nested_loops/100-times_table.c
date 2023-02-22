#include "main.h"

/**
 *print_times_table - prints the n times table, starting with 0
 * @n: number input
 * Return: the times table line by line
 */

void print_times_table(int n)
{
	int n, num, x, y;

	n = 0;

	while (n <= 15 && n >= 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		num = 1;

		while (num <= 15)
		{
			x = (n * num);
			y = x / 10;

			if (y > 0)
			{
				_putchar(y + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((x % 10) + '0');

			if (num < 15)
			{
				_putchar(',');
				_putchar(' ');

			}
			num++;
		}
		n++;

		_putchar('\n');
	}
}
