#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string to duplicate.
 *
 * Return: Pointer to the new string or NULL.
 */

char *_strdup(char *str)
{
	unsigned int length = 0;
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}

	duplicate = (char *)malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	{
		unsigned int i;

		for (i = 0; i <= length; i++)
		{
			duplicate[i] = str[i];
		}
	}
	return (duplicate);
}
