#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */

int count_words(char *str)
{
	int count = 0;
	int in_word = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			if (in_word == 0)
			{
				in_word = 1;
				count++;
			}
		}
		else
		{
			in_word = 0;
		}
	}
	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words).
 */

char **strtow(char *str)
{
	int num_words;
	char **words;
	int word_count;
        char *token;
        int i, j;
	
	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	num_words = count_words(str);

	if (num_words == 0)
	{
		return (NULL);
	}

	words = malloc((num_words + 1) * sizeof(char *));

	if (words == NULL)
	{
		return (NULL);
	}

	word_count = 0;
	token = strtok(str, " ");

	for (i = 0; i < num_words && token != NULL; i++)
	{
		words[word_count] = strdup(token);

		if (words[word_count] == NULL)
		{
			for (j = 0; j < word_count; j++)
			{
				free(words[j]);
			}
			free(words[j]);
			return (NULL);
		}
		word_count++;
		token = strtok(NULL, " ");
	}

	words[word_count] = NULL;
	return (words);
}
