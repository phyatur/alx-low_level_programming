#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc
 *
 * @nmemb: The number of element
 *
 * @size: The byte size of each array element
 *
 * Return: a pointer to the allocated memory, NULL if it fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *new;

	if (nmemb == 0 || size == 0)
		return (NULL);

	new = malloc(nmemb * size);

	if (new == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		*(new + i) = 0;

	return ((void *)new);
}
