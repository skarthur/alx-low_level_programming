#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers'\n',
 * starting with 1 and 2, followed by a new line
 * Return: Always 0
 */

int main(void)
{
	unsigned long f1 = 0, f2 = 1, sum;
	int i = 0;

	while (i < 50)
	{
		sum = f1 + f2;
		printf("%lu", sum);

		f1 = f2;
		f2 = sum;

		if (i == 49)
			printf("\n");
		else
			printf(", ");

		i++;
	}

	return (0);
}
