#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (success)
 */

int main(void)
{
	int m;
	int n;
	int o;

	for (m = 0 ; m <= 7 ; m++)
	{
		for (n = m + 1 ; n <= 8 ; n++)
		{
			for (o = n + 1 ; o <= 9 ; o++)
			{
				putchar('0' + m);
				putchar('0' + n);
				putchar('0' + o);

				if (m != 7 || n != 8 || o != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
