#include "main.h"
#include <stddef.h>

/**
 * _strlen - Calculate the length of a string
 * @s: pointer to the string
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}

/**
 * puts_half - Print the second half of a string
 * @str: pointer to the string to be printed
 */

void puts_half(char *str)
{
	if (str != NULL)
	{
		int length = _strlen(str);
		int start_index;
		int i;

		start_index = (length + 1) / 2;

		for (i = start_index; i < length; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}
