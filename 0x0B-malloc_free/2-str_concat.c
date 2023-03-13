#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Get strings and join them
 * @s1: first string
 * @s2: second string
 * Return: s1 + s2
 */

char *str_concat(char *s1, char *s2)
{
	int str1, str2, i = 0;
	char *array;

	if (s1 == NULL || s2 == NULL)
		s1 = s2 = "";

	for (str1 = 0; str1 <= *s1; str1++)
		;
	for (str2 = 0; str2 <= *s2; str2++)
		;

	array = malloc(sizeof(char) * (str1 + str2 + 1));

	if (array == NULL)
		return (NULL);

	while (*s2)
	{
		array[i] = *s2;
		i++;
		s2++;
	}
	return (array);
}
