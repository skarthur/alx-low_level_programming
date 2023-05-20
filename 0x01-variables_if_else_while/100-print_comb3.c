#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: void
 */

int main(void)
{
	int n = 0;
	int i = 1;

	while (n < 9)
	{
		while (i < 10)
		{
			putchar(n + '0');
			putchar(i + '0');
			if (n == 8 && i == 9)
				continue;
			putchar(',');
			putchar(' ');
			i++;
		}
		n++;
	}
	putchar('\n');

	return (0);
}
