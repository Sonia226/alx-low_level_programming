#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **len;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	len = malloc(sizeof(int *) * height);

	if (len == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		len[x] = malloc(sizeof(int) * width);

		if (len[x] == NULL)
		{
			for (; x >= 0; x--)
				free(len[x]);

			free(len);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			len[x][y] = 0;
	}

	return (len);
}
