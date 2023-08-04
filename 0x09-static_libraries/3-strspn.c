#include <stddef.h>

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string to be analyzed.
 * @accept: Pointer to the string containing acceptable bytes.
 *
 * Return: The number of bytes in the initial segment of s that consist
 *         only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				n++;
				break;
			}
			else if (accept[a + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
