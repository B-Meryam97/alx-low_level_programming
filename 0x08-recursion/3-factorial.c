#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: the input number.
 *
 * Return: the factorial of the number or 0 if error.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}