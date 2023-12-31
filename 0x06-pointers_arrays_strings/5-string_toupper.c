#include "main.h"

/**
 * string_toupper - changes lowercase letters of a string to uppercase.
 * @str: Pointer to the string to be modified.
 *
 * Return: A pointer to the resulting modified string.
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 'a' + 'A';
		}
		ptr++;
	}

	return (str);
}
