#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (success)
 */

int main(void)
{
	int n;
	unsigned int fib[50];

	fib[0] = 1;
	fib[1] = 2;

	printf("%u, %u", fib[0], fib[1]);

	for (n = 2 ; n < (50 ; n++)
	{
		fib[n] = fib[n - 1] + fib[n - 2];
		printf(", %u", fib[n]);
	}
	printf("\n");
	return (0);
}
