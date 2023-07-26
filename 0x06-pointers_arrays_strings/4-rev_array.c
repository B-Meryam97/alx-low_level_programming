#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: Pointer to the array of integers.
 * @n: The number of elements in the array.
 *
 */

void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		a[start] = a[start] ^ a[end];
		a[end] = a[start] ^ a[end];
		a[start] = a[start] ^ a[end];

		/** Move the indices inward */
		start++;
		end--;
	}
}
