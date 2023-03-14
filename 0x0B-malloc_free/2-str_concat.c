#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to a newly allocated space in memory
 *
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, index = 0, length = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		length++;

	concat = malloc(sizeof(char) * length);

	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat[index++] = s1[i];

	for (i = 0; s2[i]; i++)
		concat[index++] = s2[i];

	return (concat);
}
