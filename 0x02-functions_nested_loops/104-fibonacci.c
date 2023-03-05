#include <stdio.h>
#include "main.h"

/**
 * main - prints the first 98 Fibonacci numbers, starting 
 * with 1 and 2, separated by a comma followed by a space
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long f1 = 0, f2 = 1, sum;
	unsigned long f1_h1, f1_h2, f2_h1, f2_h2;
	unsigned long h1, h2;

	int count = 0;

	while (count < 92)
	{
		sum = f1 + f2;
		printf("%lu, ", sum);

		f1 = f2;
		f2 = sum;

		count++;
	}

	f1_h1 = f1 / 10000000000;
	f2_h1 = f2 / 10000000000;
	f1_h2 = f1 % 10000000000;
	f2_h2 = f2 % 10000000000;


	int count = 93;

	while (count < 99)
	{
		h1 = f1_h1 + f2_h1;
		h2 = f1_h2 + f2_h2;
		
		if (f1_h2 + f2_h2 > 9999999999)
		{
			h1 += 1;
			h2 %= 10000000000;
		}

		printf("%lu%lu", h1, h2);
		if (count != 98)
			printf(", ");
		
		f1_h1 = f2_h1;
		f1_h2 = f2_h2;
		f2_h1 = h1;
		f2_h2 = h2;
		
		count++;
	}
	printf("\n");

	return (0);
}
