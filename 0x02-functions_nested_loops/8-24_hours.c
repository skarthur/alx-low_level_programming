#include "main.h"

/**
 * jack_bauer - Prints every minute starting from 00:00 to 23:59
 *
 * Return: void
 */

void jack_bauer(void)
{
	int i = 0;

	while (i <= 23)
	{
		int j = 0;
		int a, b, x, y;

		while (j <= 59)
		{
			a = i / 10;
			b = i % 10;
			x = j / 10;
			y = j % 10;

			_putchar(a + '0');
			_putchar(b + '0');
			_putchar(':');
			_putchar(x + '0');
			_putchar(y + '0');
			_putchar('\n');
			j++;
		}
		i++;
	}
}
