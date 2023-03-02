#include "main.h"

/**
 * cap_string - Capitalize all words of a string
 * @str: string
 * Return: str
 */

char *cap_string(char *str)
{
	int i, j;
	int ch = 0;
	char sep[] = ",;.!?(){}\n\t\" ";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[0] > 96 && str[0] < 123)
			ch = 1;
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (sep[j] == str[i])
				ch = 1;
		}

		if (ch)
		{
			if (str[i] > 96 && str[i] < 123)
			{
				str[i] -= 32;
				ch = 0;
			}
			else if (str[i] > 64 && str[i] < 91)
				ch = 0;
			else if (str[i] > 47 && str[i] < 58)
				ch = 0;
		}
	}
	return (str);
}
