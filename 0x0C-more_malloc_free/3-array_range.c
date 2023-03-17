#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 *
 * @min: start value
 *
 * @max: end value
 *
 * Return: the pointer to the newly created array or NULL
 */

int *array_range(int min, int max)
{
	int *k;
	int i, size;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;

	k = malloc(size * sizeof(*k));

	if (k == NULL)
		return (NULL);

	for (i = 0; i < size && min <= max; i++, min++)
		*(k + i) = min;

	return (k);
}
