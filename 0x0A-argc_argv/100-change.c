#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints minimum number of coins to make change.
 * @argc: The size of the argv array.
 * @argv: An array containing the program command line arguments
 *
 * Return: 0 or 1
 */

int main(int argc, char **argv)
{
	int i, amount, coins = 0;
	int values[] = {25, 10, 5, 2, 1};

	if (argc - 1 != 1)
	{
		printf("%s\n", "Error");
		return (1);
	}
	amount = atoi(argv[1]);
	for (i = 0; i < 5; i++)
	{
		while (values[i] <= amount)
		{
			coins++;
			amount -= values[i];
		}
	}
	printf("%i\n", coins);
	return (0);
}
