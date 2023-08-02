#include "main.h"

/**
 * find_sqrt - Recursive helper function to find the square root.
 * @n: The number for which we need to find the square root.
 * @start: The starting point for the search.
 * @end: The ending point for the search.
 *
 * Return: The square root of n, or -1.
 */

int find_sqrt(int n, int start, int end)
{
	int mid;
	int mid_squared;

	if (start > end)
	{
		return (-1);
	}

	mid = start + (end - start) / 2;
	mid_squared = mid * mid;

	if (mid_squared == n)
	{
		return (mid);
	}
	if (mid_squared > n)
	{
		return (find_sqrt(n, start, mid - 1));
	}

	return (find_sqrt(n, mid + 1, end));
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
	return (find_sqrt(n, 0, n));
}
