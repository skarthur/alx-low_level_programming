#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to s
 * Return: void
 */

void rev_string(char *s)
{
	int count, x, y;
	char *a, z;

	a = s;
	count = 0;

	while (s[count] != '\0')
		count++;

	for (y = 1; y < count; y++)
		a++;

	for (x = 0; x < (count / 2); x++)
	{
		z = s[x];
		s[x] = *a;
		*a = z;
		a--;
	}
}
