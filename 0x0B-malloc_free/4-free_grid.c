#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees 2D array
 * @grid: 2D grid
 * @height: height dimension of grid
 *
 * Description: Frees memory allocated for the grid.
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
