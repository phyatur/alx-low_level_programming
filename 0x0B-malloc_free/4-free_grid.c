#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees your alloc_grid function
 *
 * @grid: pointer to array
 *
 * @height: height of array
 *
 * Return: nothing(void)
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
