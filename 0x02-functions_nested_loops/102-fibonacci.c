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
    unsigned int fib[50];
  
    fib[0] = 1;
    fib[1] = 2;

    printf("%u, %u", fib[0], fib[1]);

    for (i = 2; i < 50; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
        printf(", %u", fib[i]);
    }

    printf("\n");

    return (0);
}
