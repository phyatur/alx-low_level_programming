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
	int i = 0, length = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		length++;
		i++;
	}

	return (length);
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
	int i = 0, words = 0, length = 0;

	for (i = 0; *(str + i); i++)
		length++;

	for (i = 0; i < length; i++)
	{
		if (*(str + i) != ' ')
		{
			words++;
			i += counter(str + i);
		}
	}

	return (words);
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
	char **strings;

	int index = 0,

	int w, words, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = counterWords(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[index] == ' ')
			index++;

		letters = counter(str + index);
		strings[w] = malloc(sizeof(char) * (letters + 1));

		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);
			free(strings);
			return (NULL);

		for (l = 0; l < letters; l++)
			strings[w][l] = str[index++];

		strings[w][l] = '\0';
	}
	strings[w] = NULL;
	return (strings);
}
