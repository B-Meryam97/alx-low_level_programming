#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: Pointer to the string to be searched.
 * @accept: Pointer to the string containing bytes to be matched.
 *
 * Return: Pointer to the byte in s or NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	int b;

		while (*s)
		{
			for (b = 0; accept[b]; b++)
			{
			if (*s == accept[b])
			return (s);
			}
		s++;
		}

	return ('\0');
}
