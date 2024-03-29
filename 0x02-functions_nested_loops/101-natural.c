#include <stdio.h>

/**
 * main - Lists all the natural numbers below 1024 that are multiples of 3 or 5
 *
 * Return: Always 0
 */

int main(void)
{
	int i, sum = 0;

	while (i < 1024)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
		i++;
	}

	printf("%d\n", sum);
	return (0);
}
