#include "main.h"

/**
 * actual_sqrt_recursion - Recursive helper function to find the square root.
 * @n: number to calculate the sqaure root of.
 * @i: iterator.
 *
 * Return: resulting square root.
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (actual_sqrt_recursion(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The input number for which to find the square root.
 *
 * Return: The square root of n, or -1.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (actual_sqrt_recursion(n, 0));
}
