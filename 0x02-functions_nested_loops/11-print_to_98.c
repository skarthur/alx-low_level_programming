#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_to_98 - prints natural numbers from n to 98
 *
 * @n: number input
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
	}
	else
	{
		printf("%d", n);
	}
	printf("\n");
}
