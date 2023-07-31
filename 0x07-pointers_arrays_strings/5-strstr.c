#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring.
 * @haystack: Pointer to the string to be searched.
 * @needle: Pointer to the substring to be located.
 *
 * Return: Pointer to the beginning of the located substring or NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
