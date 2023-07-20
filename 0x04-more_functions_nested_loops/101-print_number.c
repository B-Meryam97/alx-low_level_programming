#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: the integer to print
 */

void print_number(int n)
{
	int div = 1;
	int m = n;

	if (n < 0)
	{
		_putchar('-');
		m = -m;
	}

	while (m / div >= 10)
	{
		div *= 10;
	}

	while (div != 0)
	{
		_putchar(m / div + '0');
		m %= div;
		div /= 10;
	}
}
