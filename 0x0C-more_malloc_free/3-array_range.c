#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: pointer to the newly created array or NULL.
 */

int *array_range(int min, int max)
{
	int *arr;
	int size, value;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(size * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (value = min; value <= max; value++)
		arr[value - min] = value;

	return (arr);
}
