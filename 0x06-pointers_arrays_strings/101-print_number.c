#include "main.h"

/**
 * print_number - prints an integer.
 * @n: The integer to be printed
 */

void print_number(int n)
{
	int divisor = 1;
	int digit;
	int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	while (num / divisor >= 10)
	{
		divisor *= 10;
	}
	while (divisor > 0)
	{
		digit = num / divisor;
		_putchar(digit + '0');
		num %= divisor;
		divisor /= 10;
	}
}
