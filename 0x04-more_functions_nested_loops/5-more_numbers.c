#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: Always 0
 */

void more_numbers(void)
{
	int i, j;

	i = 0;

	while (i <= 9)
	{
		j = 0;

		while (j <= 14)
		{
			if (j >= 10)
				_putchar((j / 10) + '0');

			_putchar((j % 10) + '0');

			j++;
		}

		i++;
		_putchar('\n');
	}

}
