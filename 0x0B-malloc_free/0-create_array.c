#include "main.h"
#include <stdlib.h>

/**
 * create_array - to create an array
 * @size: the size of the array
 * @c: the character to be stored in the array
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int t;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);
	for (t = 0; t < size; t++)
		arr[t] = c;
	return (arr);
}
