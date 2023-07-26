#include "main.h"
#include <stdbool.h>

/**
 * cap_string - Capitalizes all words of a string.
 * @str: Pointer to the string to be modified.
 *
 * Return: A pointer to the resulting modified string.
 */

char *cap_string(char *str)
{
	char separators[] = " \t\n,;.!?\"(){}";
	char *ptr = str;
	int i;

	if (*ptr >= 'a' && *ptr <= 'z')
	{
		*ptr = *ptr - 'a' + 'A';
	}
	ptr++;

	while (*ptr != '\0')
	{
		for (i = 0; separators[i] != '\0'; i++)
		{
			if (*ptr == separators[i])
			{
				if (*(ptr + 1) >= 'a' && *(ptr + 1) <= 'z')
				{
					*(ptr + 1) = *(ptr + 1) - 'a' + 'A';
				}
				break;
			}
		}
		ptr++;
	}

	return (str);
}

