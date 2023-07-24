#include "main.h"
#include <stddef.h>

/**
 * reset_to_98 - takes a pointer to an int
 * updates the value it points to to 98
 * @n: pointer to an integer whose value needs to be updated to 98
 */

void reset_to_98(int *n)
{
	if (n != NULL)
	{
		*n = 98;
	}
}
