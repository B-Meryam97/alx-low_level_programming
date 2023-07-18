#include <stdio.h>

/**
 * print_fibonacci - Prints the first n Fibonacci numbers
 * @n: The number of Fibonacci numbers to print
 */
void print_fibonacci(int n)
{
    unsigned long fib1 = 1;
    unsigned long fib2 = 2;
    unsigned long fib;
    int i;

    if (n >= 1)
        printf("%lu", fib1);

    if (n >= 2)
        printf(", %lu", fib2);

    for (i = 3; i <= n; i++)
    {
        fib = fib1 + fib2;
        printf(", %lu", fib);
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
