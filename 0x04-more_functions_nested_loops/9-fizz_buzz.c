#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the numbers from 1 to 100, followed by a new line.
 * For numbers that are:
 * - multiples of 3, print Fizz,
 * - multiples of 5, print Buzz,
 * - multiples of both 3 and 5, print FizzBuzz
 *   Return: Always 0
 */

int main(void)
{
	int i;
	char f[] = "Fizz", b[] = "Buzz", fb[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
			printf("%s", b);
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("%s ", fb);
		else if (i % 3 == 0)
			printf("%s ", f);
		else if (i % 5 == 0)
			printf("%s ", b);
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
