#include "main.h"

/**
 * print_number - prints an integer.
 * @n: The integer to be printed
 */

void print_number(int n)
{
	int power = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	/* Calculate the power of 10 closest to the given number */
	while ((n / power) >= 10)
	{
		power *= 10;
	}

	/* Extract and print each digit */
	while (power > 0)
	{
		_putchar((n / power) + '0');
		n %= power;
		power /= 10;
	}
}
