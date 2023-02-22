#include "main.h"

/**
 *print_times_table - prints the n times table, starting with 0
 * @n: number input
 * Return: the times table line by line
 */

void print_times_table(int n)
{
	int n, num, x, y;

	if ((n > 15) || (n < 0))
	{
		continue;
	}

	x = 0;

	while (x <= n)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		num = 1;

		while (num <= n)
		{
			y = (n * num);
			_putchar(y + '0');
			num++;
		}
		x++;

		_putchar('\n');
	}
}
