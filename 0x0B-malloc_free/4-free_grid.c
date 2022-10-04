#include "main.h"
#include <stdlib.h>

/**
* free_grid - Free up 2D array
* @grid: Pointer to array
* @height: array rows
*
* Return: void
*/

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		free(grid);
	}
}
