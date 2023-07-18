#include <stdio.h>

/**
 * print_fibonacci - Prints the first n Fibonacci numbers
 * @n: The number of Fibonacci numbers to print
 */
void print_fibonacci(int n)
{
	unsigned long long fib1 = 1;
	unsigned long long fib2 = 2;
	unsigned long long fib;
	int i;

	/* Print the first two Fibonacci numbers separately */
	printf("%llu, %llu", fib1, fib2);

	/* Print the remaining Fibonacci numbers */
	for (i = 3; i <= n; i++)
	{
		fib = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib;

		/* Print the current Fibonacci number */
		printf(", %llu", fib);
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

