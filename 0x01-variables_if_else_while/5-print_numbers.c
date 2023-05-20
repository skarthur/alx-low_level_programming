#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: void
 */

int main(void)
{
	char number = '0';

	while (number <= '9')
	{
		putchar(number);
		number++;
	}
	putchar('\n');

	return (0);
}
