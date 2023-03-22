#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given as a parameter
 *
 * @array: array of elements
 * @size: size of array
 * @action: pointer to function
 *
 * Return: Nothing(void)
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
