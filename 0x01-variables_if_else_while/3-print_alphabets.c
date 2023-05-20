#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: void
 */

int main(void)
{
	char alphabet = 'a', alpha = 'A';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}

	while (alpha <= 'Z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
