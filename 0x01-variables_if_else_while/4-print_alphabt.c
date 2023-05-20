#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: void
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'q' && alpha != 'e')
			putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
