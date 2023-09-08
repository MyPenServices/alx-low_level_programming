#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: the minimum values to be included
 * @max: the maximum values to be included
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *a, i = 0;

	if (min > max)
		return (NULL);
	a = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (a == NULL)
		return (NULL);
	while (min <= max)
	{
		a[i] = min;
		i++;
		min++;
	}
	return (a);
}
