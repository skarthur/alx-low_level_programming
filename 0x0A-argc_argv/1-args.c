#include <stdio.h>

/**
 * main - Prints number of arguments passed into it.
 * @argc: The size of the argv array.
 * @argv: An array containing the program command line arguments
 *
 * Return: Always argc.
 */

int main(int argc, char **argv)
{
	if (*argv[0] > 0)
		printf("%i\n", argc - 1);
	return (0);
}
