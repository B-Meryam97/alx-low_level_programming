#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @str: Pointer to the string to be encoded.
 *
 * Return: A pointer to the resulting encoded string.
 */

char *rot13(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if ((*ptr >= 'A' && *ptr <= 'Z') || (*ptr >= 'a' && *ptr <= 'z'))
		{
			char rotate_by = (*ptr >= 'a' && *ptr <= 'z') ? 'a' : 'A';
			*ptr = (*ptr - rotate_by + 13) % 26 + rotate_by;
		}
		ptr++;
	}

	return (str);
}
