#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: starting elements.
 * @max: ending elements.
 *
 * Return: returns a pointer to an array of elements.
 */

int *array_range(int min, int max)
{
	int *ptr;
	int arr;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	arr = 0;
	while (min <= max)
	{
		ptr[arr] = min;
		min++;
		arr++;
	}
	return (ptr);
}
