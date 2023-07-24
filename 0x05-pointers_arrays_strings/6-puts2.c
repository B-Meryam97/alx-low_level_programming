#include "main.h"
#include <stddef.h>

/**
 * puts2 - prints every other character of a string
 * @str: pointer to the string to be printed
 */

void puts2(char *str)
{
	if (str != NULL)
	{
		int i = 0;

		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;

			if (str[i] != '\0')
			{
				i++;
			}
		}

		_putchar('\n');
	}
}
