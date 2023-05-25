#include <stdio.h>

/**
 * main - prints the sum of even-valued fibonacci
 *
 * Return: 0
 */

int main(void)
{
	unsigned long f1 = 0, f2 = 1, sum;
	float toatla_sum = 0;

	while (total_sum <= 4000000)
	{
		sum = f1 = f2;
		if ((sum % 2) == 0)
			total_sum += sum;
		f1 = f2;
		f2 = sum;
	}
	printf("%.0f\n", total_sum);
	return (0);
}
