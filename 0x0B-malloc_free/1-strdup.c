#include "main.h"
#include <stdlib.h>

/**
 * strdup - a function that returns a pointer to a newly allocated space in memory
 *
 * @str: string to be duplicated
 *
 * Return: a pointer to the duplicated string, a pointer to the duplicated string
 *
 */

char *_strdup(char *str)
{
	char *duplicate;
	int i, j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	i++;
	duplicate = malloc(sizeof(*str) * i);
	if (duplicate == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
	{
		duplicate[j] = str[j];
		j++;
	}
	return (duplicate);
}
