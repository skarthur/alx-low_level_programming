#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: void
 */

int main(void)
{
	char number = '0', alpha = 'a';

	while (number <= '9')
	{
		putchar(number);
		number++;
	}

	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
