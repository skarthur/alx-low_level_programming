#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with
 * 1 and 2, separated by a comma followed by a space
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long f1 = 0, f2 = 1, sum;
	int count = 0;

	while (count < 98)
	{
		sum = f1 + f2;
		if (count == 97)
		{
			printf("%lu", sum);
		}
		printf("%lu, ", sum);

		f1 = f2;
		f2 = sum;

		count++;
	}
	printf("\n");

	return (0);
}
