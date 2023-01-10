#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - fun that returns a pointer to a 2 dimension array of int.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **twodarry;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	twodarry = malloc(height * sizeof(int *));

	for (i = 0; i < height; i++)
	{
		twodarry[i] = malloc(width * sizeof(int));
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			twodarry[i][j] = 0;

	return (twodarry);
}
