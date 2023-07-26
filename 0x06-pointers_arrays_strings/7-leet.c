#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: Pointer to the string to be encoded.
 *
 * Return: A pointer to the resulting encoded string.
 */

char *leet(char *str)
{
	char leet_map[] = "AEOTL";
	char leet_replacement[] = "43071";
	char *ptr = str;
	int i;

	while (*ptr != '\0')
	{
		for (i = 0; leet_map[i] != '\0'; i++)
		{
			if (*ptr == leet_map[i] || *ptr == leet_map[i] + 32)
			{
				*ptr = leet_replacement[i];
				break;
			}
		}
		ptr++;
	}

	return (str);
}
