#include "main.h"

/**
 * _strchr - locates character in a string
 * @s: the string to be searched
 * @c: the character to be searched in s
 * Return: S or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
