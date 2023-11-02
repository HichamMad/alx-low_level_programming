#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - allocates a matrix of integers
 * @width: width of grid
 * @height: height of grid
 * Return: void
 */
int **alloc_grid(int width, int height)
{
	int **mat;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	mat = malloc(height * sizeof(int *));
	if (mat == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		mat[i] = malloc(width * sizeof(int));
		if (mat[i] == NULL)
		{
			while (i >= 0)
				free(mat[i--]);
			free(mat);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			mat[i][j] = 0;
	}
	return (mat);
}
