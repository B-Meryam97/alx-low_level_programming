#include "main.h"

/**
  * is_prime - checks prime number.
  * @n: integer.
  * @d: divisor.
  *
  * Return: 1 if number is prime, 0 otherwise.
  */
int is_prime(int n, int d)
{
	if (d == 1)
	{
		return (1);
	}
	if (n % d == 0)
	{
		return (0);
	}
	d--;
	return (is_prime(n, d));
}

/**
  * is_prime_number - checks if number is prime.
  * @n: integer.
  *
  * Return: 1 if number is prime, 0 otherwise.
  */
int is_prime_number(int n)
{
	int d;

	if (n <= 1)
	{
		return (0);
	}
	d = n / 2;
	return (is_prime(n, d));
}
