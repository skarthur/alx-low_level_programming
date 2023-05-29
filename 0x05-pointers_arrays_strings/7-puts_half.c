#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to str
 * Return: void
 */

void puts_half(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
		j += 1;

	if (j % 2 == 1)
	{
		i = (j - 1) / 2;
		i += 1;
	}
	else
		i = j / 2;

	for (; i < j; i++)
		_putchar(str[i]);

	_putchar('\n');
}
