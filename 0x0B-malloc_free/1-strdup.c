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
	int i, new;
	char *array;

	if (str == NULL)
		return (NULL);

	for (new = 0; new <= *str; new++)
		;

	new += 1;
	array = malloc(sizeof(char) * new);

	for (i = 0; i < new; i++)
		array[i] = str[i];

	if (array == NULL)
		return (NULL);
	return (array);
}
