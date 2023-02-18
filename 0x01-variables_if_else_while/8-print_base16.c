#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;
	char x;

	for (num = 0; num < 10; num++)
		putchar((num) + '0');

	for (x = 'a'; x <= 'f'; x++)
		putchar(x);

	putchar('\n');
	return (0);
}
