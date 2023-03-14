#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars
 *
 * @size: size of array
 * @c: specific char
 *
 * Return: a pointer to the array, or NULL if it fails
 *
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);
	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
