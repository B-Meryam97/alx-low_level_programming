#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times '\' can be printed
 * If n is 0 or less, the function should only print a \n
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
