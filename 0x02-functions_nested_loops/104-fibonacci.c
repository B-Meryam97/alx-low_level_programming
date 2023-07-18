#include "main.h"
#include <stdio.h>
#include <gmp.h>

/**
 * main -Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	mpz_t fib1, fib2, fib_sum;
	int count;

	mpz_init_set_ui(fib1, 1);
	mpz_init_set_ui(fib2, 2);
	mpz_init(fib_sum);

	gmp_printf("%Zd, %Zd", fib1, fib2);

	for (count = 2; count < 98; count++)
	{
		mpz_add(fib_sum, fib1, fib2);

		gmp_printf(", %Zd", fib_sum);

		mpz_set(fib1, fib2);
		mpz_set(fib2, fib_sum);
	}

	printf("\n");

	mpz_clears(fib1, fib2, fib_sum, NULL);

	return (0);
}
