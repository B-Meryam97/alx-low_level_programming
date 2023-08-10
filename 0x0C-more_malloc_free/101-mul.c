#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_error - prints the error message and exits with status 98
 */

void print_error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * is_digit_str - checks if a string is composed of digits only
 * @str: The string to check
 * Return: 1 if all characters are digits, 0 otherwise
 */

int is_digit_str(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return 0;
		i++;
	}

	return (1);
}

/**
 * main - Entry point
 * @argc: The number of arguments
 * @argv: The array of arguments
 * Return: 0 on success, 98 on error
 */

int main(int argc, char **argv)
{
	int len1, len2, i, j, carry;
	int *result;

	if (argc != 3 || !is_digit_str(argv[1]) || !is_digit_str(argv[2]))
		print_error();

	len1 = strlen(argv[1]);
	len2 = strlen(argv[2]);

	result = malloc((len1 + len2) * sizeof(int));

	if (result == NULL)
		return (1);

	for (i = 0; i < len1 + len2; i++)
		result[i] = 0;

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			result[i + j + 1] += (argv[1][i] - '0') * (argv[2][j] - '0') + carry;
			carry = result[i + j + 1] / 10;
			result[i + j + 1] %= 10;
		}
		result[i + j + 1] += carry;
	}

	if (result[0] == 0)
		i = 1;
	else
		i = 0;

	for (; i < len1 + len2; i++)
		putchar(result[i] + '0');

	putchar('\n');
	free(result);
	return (0);
}
