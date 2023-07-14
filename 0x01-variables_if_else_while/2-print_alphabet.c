#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	char m;

	for (m = "a" ; m <= "z" ; ++m)
		putchar(m);
	putchar("\n");
	return (0);
}
