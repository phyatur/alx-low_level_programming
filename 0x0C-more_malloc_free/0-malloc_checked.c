#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 *
 * @b: memory size to be allocated
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);

	if (a == NULL)
		exit(98);

	return (a);
}
