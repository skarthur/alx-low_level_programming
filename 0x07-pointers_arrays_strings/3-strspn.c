#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 *
 * @s: segment to return bytes fromn
 * @accept: bytes to include
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int x = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					x++;
			}
		}
		else
			return (x);
	}
	return (x);
}
