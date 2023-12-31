#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The number to generate the times table
 */
void print_times_table(int n)
{
	int row, column, product;

	if (n <= 15 && n >= 0)
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				product = row * column;
				if (column == 0)
					printf("%d", product);
				else
					printf(", %3d", product);
			}
			printf("\n");
		}
	}
}
