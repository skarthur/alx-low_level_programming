#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * strtow - Splits strings into words.
 * @str: String to be splitted.
 * Return: a pointer to array of String.
 */
char **strtow(char *str)
{
	char **array, *ptr = str;
	unsigned int i = 0, j = 0;

	if (str == 0 || *str == 0)
		return (0);
	while (*ptr)
	{
		if (!(*ptr == ' ') && (*(ptr + 1) == ' ' || *(ptr + 1) == 0))
			i++;
		ptr++;
	}

	if (i == 0)
		return (NULL);
	array = malloc((i + 1) * sizeof(char *));
	if (array == 0)
		return (0);
	while (*str)
	{
		if (*str != ' ')
		{
			for (ptr = str, i = 0; *ptr != ' ' && *ptr != 0;)
				i++, ptr++;
			array[j] = malloc(i + 1);
			if (array[j] == 0)
			{
				while (j >= 0)
					free(array[--j]);
				free(array);
				return (0);
			}
			ptr = array[j++];
			while (*str != ' ' && *str != 0)
				*ptr++ = *str++;
			*ptr = 0;
		}
		else
			str++;
	}
	array[j] = 0;
	return (array);
}
