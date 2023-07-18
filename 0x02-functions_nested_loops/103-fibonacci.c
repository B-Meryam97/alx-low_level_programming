#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (success)
 */

int main(void)
{
	unsigned long fib1 = 1, fib2 = 2, fib_sum = 0, even_sum = 0;

	while (fib1 <= 4000000)
	{
		if (fib1 % 2 == 0)
			even_sum += fib1;
	
	fib_sum = fib1 + fib2;
	fib1 = fib2;
	fib2 = fib_sum;
	}

	printf("%lu\n", even_sum);

	return (0);
}
