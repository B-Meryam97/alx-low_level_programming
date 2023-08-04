#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings representing the arguments
 *
 * Return: 0 (success) or 1 (error).
 */

int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int num_coins = sizeof(coins) / sizeof(coins[0]);
	int total_coins = 0;
	int remaining_amount;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	remaining_amount = atoi(argv[1]);

	if (remaining_amount < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < num_coins; i++)
	{
		total_coins += remaining_amount / coins[i];
		remaining_amount %= coins[i];
	}

	printf("%d\n", total_coins);
	return (0);
}
