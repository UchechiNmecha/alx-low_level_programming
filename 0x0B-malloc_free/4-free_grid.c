#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * free_grid - Entry point
 * @grid: 2 dim. array to free
 * @height: height (size)
 * Return: Always free grid
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL || height != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
