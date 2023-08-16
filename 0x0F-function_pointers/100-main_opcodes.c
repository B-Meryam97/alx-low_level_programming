#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Prints opcodes of main function
 * @n: Number of bytes to print
 */

void print_opcodes(int n)
{
	int i;
	char *main_ptr;

	main_ptr = (char *)print_opcodes;

	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < n; i++)
	{
		printf("%02hhx", main_ptr[i]);
		if (i != n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 * Return: 0 (success) or 1 on wrong number.
 */

int main(int argc, char *argv[])
{
	int num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);
	print_opcodes(num_bytes);

	return (0);
}
