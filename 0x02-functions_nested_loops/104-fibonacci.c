#include <stdio.h>

/**
 * print_fibonacci - Prints the first n Fibonacci numbers
 * @n: The number of Fibonacci numbers to print
 */

void print_fibonacci(int n)
{
	int fib1 = 1;
	int fib2 = 2;
	int fib;

	if (n >= 1)
		printf("%d", fib1);

	if (n >= 2)
		printf(", %d", fib2);

	for (int i = 3; i <= n; i++)
	{
		fib = fib1 + fib2;
		printf(", %d", fib);
		fib1 = fib2;
		fib2 = fib;
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
