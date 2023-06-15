#include "main.h"
#include <stdlib.h>

/**
 * _realloc - allocates memory for an array, using malloc.
 * @ptr: number of elements.
 * @old_size: element's size.
 * @new_size: element's size.
 *
 * Return: returns a pointer to an array of elements.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *array;

	if (new_size > old_size)
	{
		array = malloc(new_size);
		free(ptr);
		return (array);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		array = malloc(new_size);
		free(ptr);
		return (array);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
