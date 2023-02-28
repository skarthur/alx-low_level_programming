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

	while (s[count] != '\0')
		count += 1;

	for (y = 1; y < count; y++)
		a += 1;

	for (x = 0; x < (count / 2); x++)
	{
		z = s[x];
		s[x] = *a;
		*a = z;
		a -= 1;
	}
}
