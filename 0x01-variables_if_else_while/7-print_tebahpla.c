#include <stdio.h>

/**
 * main - ENtry point
 *
 * Return: 0 (success)
 */

int main(void)
{
	int i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
