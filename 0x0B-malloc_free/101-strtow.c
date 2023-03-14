#include "main.h"
#include <stdlib.h>

/**
 * counter - count number of words
 *
 * @str: char
 *
 * Return: number of words
 **/

int counter(char *str)
{
	int i = 0;

	if (str[i] == '\0')
		return (0);
	if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
		return (1 + counter(str, i + 1));
	return (counter(str, i + 1));
}

/**
 * counterWords - counts number of words in array
 *
 * @str: char
 *
 * Return: number of words
 **/

int counterWords(char *str)
{
	if (str[0] != ' ')
		return (1 + counter(str, 0));
	return (counter(str, 0));
}

/**
 * strtow - a function that splits a string into words.
 *
 * @str: the string
 *
 * Return: pointer to an array of strings or null
 **/

char **strtow(char *str)
{
	char **duplicate;
	int i, j, k, words;

	if (str == NULL || str[0] == 0)
		return (NULL);
	words = counterWords(str);
	if (words < 1)
		return (NULL);
	duplicate = malloc(sizeof(char *) * (words + 1));
	if (duplicate == NULL)
		return (NULL);
	i = 0;
	while (i < words && *str != '\0')
	{
		if (*str != ' ')
		{
			j = 0;
			while (str[j] != ' ')
				j++;
			duplicate[i] = malloc(sizeof(char) * (j + 1));
			if (duplicate[i] == NULL)
			{
				while (--i >= 0)
					free(duplicate[--i]);
				free(duplicate);
				return (NULL);
			}
			k = 0;
			while (k < j)
			{
				duplicate[i][k] = *str;
				k++, str++;
			}
			duplicate[i][k] = '\0';
			i++;
		}
		str++;
	}
	duplicate[i] = '\0';
	return (duplicate);
}
