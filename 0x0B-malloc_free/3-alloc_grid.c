#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2
 * dimensional array of integers.
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
	if (twodarry == NULL)
	{
		free(twodarry);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		twodarry[i] = malloc(width * sizeof(int));
		if (twodarry[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(twodarry[i]);
			free(twodarry);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			twodarry[i][j] = 0;

	return (twodarry);
}
