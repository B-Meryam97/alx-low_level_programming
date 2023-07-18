#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_fibonacci - Prints the first n Fibonacci numbers
 * @n: number of fib numbers to print
 */

void print_fibonacci(int n)
{
	unsigned long fib1 = 1;
	unsigned long fib2 = 2;

	printf("%lu, %lu, ", fib1, fib2);

	for (int i = 3; i <= n; i++)
	{
		unsigned long fib = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib;

		printf("%lu", fib);

		if (i != n)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
}

/**
 * main -Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	print_fibonacci(98);
	return (0);
}
