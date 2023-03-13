#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Duplicates string
 * @str: string
 * Return: A pointer to the duplicated string, Null if str = NULL
 */

char *_strdup(char *str)
{
	unsigned int i, size = 0;
	char *array;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;

	array = malloc((size + 1) * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
		array[i] = str[i];

	return (array);
}
