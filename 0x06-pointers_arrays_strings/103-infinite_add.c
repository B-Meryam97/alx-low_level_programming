#include <stdio.h>
#include "main.h"

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer r.
 *
 * Return: Pointer to the result or 0 if the result can't be stored in r.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, carry, len1, len2;

	for (len1 = 0; n1[len1] != '\0'; len1++)
	{
		;
	}
	for (len2 = 0; n2[len2] != '\0'; len2++)
	{
		;
	}

	i = len1 - 1;
	j = len2 - 1;
	k = size_r - 1;
	carry = 0;
	r[k] = '\0';

	while (i >= 0 || j >= 0)
	{
		int sum = carry;

		if (i >= 0)
		{
			sum += n1[i--] - '0';
		}
		if (j >= 0)
		{
			sum += n2[j--] - '0';
		}

		sum += n2[j--] - '0';
		r[--k] = (sum % 10) + '0';

		if (k < 0 && (i >= 0 || j >= 0 || carry > 0))
		{
			return (0);
		}
	}

	if (carry > 0)
	{
		if (k == 0)
		{
			return (0);
		}
		r[--k] = carry + '0';
	}
	for (i = 0; r[k] != '\0'; i++, k++)
	{
		r[i] = r[k];
	}
	return (r);
}

