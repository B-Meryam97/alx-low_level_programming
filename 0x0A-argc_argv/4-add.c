#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * is_positive_integer - Check if a string is a positive integer
 * @str: The string to check
 *
 * Return: true if the string is a positive integer, false otherwise
 */

bool is_positive_integer(const char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			return (false);
		}
		str++;
	}
	return (true);
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings representing the arguments
 *
 * Return: 0 if addition is successful, 1 if there's an error
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (is_positive_integer(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);
	return (0);
}
