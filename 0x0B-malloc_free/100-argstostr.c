#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: The argument count.
 * @av: The argument vector.
 *
 * Return: Pointer to the concatenated string or NULL.
 */

char *argstostr(int ac, char **av)
{
	int total_length = 0;
	int i, j;
	char *concatenated;
	int concatenated_pos;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}


	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			total_length++;
		}
		total_length++;
	}

	concatenated = malloc((total_length + 1) * sizeof(char));

	if (concatenated == NULL)
	{
		return (NULL);
	}

	concatenated_pos = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concatenated[concatenated_pos++] = av[i][j];
		}
		concatenated[concatenated_pos++] = '\n';
	}
	concatenated[concatenated_pos] = '\0';

	return (concatenated);
}
