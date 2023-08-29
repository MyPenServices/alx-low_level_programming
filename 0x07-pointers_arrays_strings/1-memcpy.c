#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination location
 * @src: source location
 * @n: number of bytes to copy
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0 ; k < n ; k++)
		dest[k] = src[k];
	return (dest);
}
