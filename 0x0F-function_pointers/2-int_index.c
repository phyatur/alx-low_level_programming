#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 *
 * @array: array of elements
 * @size: size of array
 * @cmp: pointer to fuction
 *
 * Return: index of the first element on SUCCESS or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
		return (-1);

	if (array != NULL && size > 0 && cmp != NULL)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
