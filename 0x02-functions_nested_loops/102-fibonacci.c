#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (success)
 */

int main(void)
{
	int i;
	unsigned long long fib1 = 1, fib2 = 2;

	printf("%llu, %llu", fib1, fib2);

	for (i = 3; i <= 50; i++)
	{
		unsigned long long fib = fib1 + fib2;
		printf(", %llu", fib);
		fib1 = fib2;
		fib2 = fib;
	}

	printf("\n");

	return (0);
}
