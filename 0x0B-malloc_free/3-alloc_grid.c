#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional arr
 *
 * @width: the width of array
 *
 * @height: the height of array
 *
 * Return: a pointer to a 2 dimensional array, NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int i, j, **multi;

	if (width < 1 || height < 1)
		return (NULL);
	multi = malloc(sizeof(int *) * height);
	if (multi == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		multi[i] = malloc(sizeof(int) * width);
		if (multi[i] == NULL)
		{
			while (--i >= 0)
				free(multi[i]);
			free(multi);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			multi[i][j] = 0;
	}
	return (multi);
}
