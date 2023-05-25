#include "main.h"

/**
 * print_times_table - prints the n times table
 *
 * @n: number input
 *
 * Return: void
 */

void print_times_table(int n)
{
	int i = 0, j;

	if (n > 15 || n < 0)
		return;
	while (i <= n)
	{
		j = 0;
		while (j <= n)
		{
			if ((j * i) > 99)
			{
				_putchar(((j * i) / 100) + '0');
				_putchar((((j * i) / 10) % 10) + '0');
				_putchar(((j * i) % 10) + '0');
			}
			else if ((j * i) > 9)
			{
				_putchar(' ');
				_putchar(((j * i) / 10) + '0');
				_putchar(((j * i) % 10) + '0');
			}
			else if (j != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((j * i) + '0');
			}
			else
				_putchar((j * i) + '0');
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
