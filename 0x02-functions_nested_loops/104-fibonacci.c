#include <stdio.h>
#include "main.h"
#define LARGEST 10000000000

/**
 * main - prints the first 98 fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int f1 = 0, h1 = 1, f2 = 0, h2 = 2;
	unsigned long int hold1, hold2, hold3;

	int count;

	printf("%lu, %lu, ", h1, h2);
	for (count = 2; count < 98; count++)
	{
		if (h1 + h2 > LARGEST || f2 > 0 || f1 > 0)
		{
			hold1 = (h1 + h2) / LARGEST;
			hold2 = (h1 + h2) % LARGEST;
			hold3 = f1 + f2 + hold1;
			f1 = f2, f2 = hold3;
			h1 = h2, h2 = hold2;
			printf("%lu%010lu", f2, h2);
		}
		else
		{
			hold2 = h1 + h2;
			h1 = h2, h2 = hold2;
			printf("%lu", h2);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
