#include "main.h"
#include <stdio.h>

/**
 * print_fibonacci - Prints the first n Fibonacci numbers
 * @n: The number of Fibonacci numbers to print
 */
void print_fibonacci(int n)
{
	unsigned long fib1 = 1;
	unsigned long fib2 = 2;

	/* Print the first two Fibonacci numbers separately */
	printf("%lu, %lu", fib1, fib2);

	/* Print the remaining Fibonacci numbers */
	int i;
	for (i = 3; i <= n; i++)
	{
		unsigned long fib = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib;

		/* Print the current Fibonacci number */
		printf(", %lu", fib);
	}

	printf("\n");
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
	print_fibonacci(98);
	return (0);
}

