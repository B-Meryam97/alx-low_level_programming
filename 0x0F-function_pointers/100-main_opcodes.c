#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 * @argc: The argument count.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, 1 on incorrect argument count, and 2 on invalid input.
 */

int main(int argc, char *argv[])
{
	int num_bytes, i;
	unsigned char *main_start;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);
	if (num_bytes <= 0)
	{
		printf("Error\n");
		return (2);
	}

	main_start = (unsigned char *)main;


	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", main_start[i]);
		if (i < num_bytes - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
