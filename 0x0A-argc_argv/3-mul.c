#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers..
 * @argc: The size of the argv array.
 * @argv: An array containing the program command line arguments
 *
 * Return: 0 or 1
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
