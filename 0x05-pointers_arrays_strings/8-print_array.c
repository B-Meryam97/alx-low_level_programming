#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to the array of integers to be printed
 * @n: number of elements to print
 */

void print_array(int *a, int n)
{
	if (a != NULL && n > 0)
	{
		int i;

		printf("%d", a[0]);

		for (i = 1; i < n; i++)
		{
			printf(", %d", a[i]);
		}
		printf("\n");
	}
}
