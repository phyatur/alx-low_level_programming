#include "main.h"
#include <stdlib.h>

/**
 * _realloc - a function that reallocates a memory block using malloc and free
 *
 * @ptr: A pointer to memory
 *
 * @old_size: size previously allocated for ptr
 *
 * @new_size: New size to allocate in memory
 *
 * Return: pointer to reallocated memory or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	char *copy, *fill;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		mem = malloc(new_size);

		if (mem == NULL)
			return (NULL);

		return (mem);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	copy = ptr;
	mem = malloc(sizeof(*copy) * new_size);

	if (mem == NULL)
	{
		free(ptr);
		return (NULL);
	}

	fill = mem;

	for (i = 0; i < old_size && i < new_size; i++)
		fill[i] = *copy++;

	free(ptr);
	return (mem);
}
