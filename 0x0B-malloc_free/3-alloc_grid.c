#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocating a 2D array
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array
 * Return: a pointer to the 2D array
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int hgt, wid;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (hgt = 0; hgt < height; hgt++)
	{
		arr[hgt] = malloc(sizeof(int) * width);

		if (arr[hgt] == NULL)
		{
			for (; hgt >= 0; hgt--)
				free(arr[hgt]);

			free(arr);
			return (NULL);
		}
	}

	for (hgt = 0; hgt < height; hgt++)
	{
		for (wid = 0; wid < width; wid++)
			arr[hgt][wid] = 0;
	}
	return (arr);
}
