#include "main.h"
#include <stdlib.h>

/**
* array_range - Creates an array of integer
* @min: lower limit
* @max: upper limit
*
* Return: array or NULL on failure
*/

int *array_range(int min, int max)
{
	int i = 0, j = 0;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		arr[j] = 1;
		j++;
	}

	return (arr);
}
