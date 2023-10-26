#include "main.h"

/**
 *binary_to_uint - program to convert a binary no to int
 *@b: binary
 *Return:unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int t;

	t = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		t <<= 1;
		if (b[i] == '1')
			t += 1;
	}
	return (t);
}
