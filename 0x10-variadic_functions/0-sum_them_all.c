#include "variadic_functions.h"

/**
 *sum_them_all - the function to return sum of parameters
 *@n: the parameter
 *Return: the integer
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int x;
	va_list addNumbers;

	va_start(addNumbers, n);

	if (n == 0)
		return (0);
	for (x = 0; x < n; x++)
		sum = sum + va_arg(addNumbers, int);
	va_end(addNumbers);
	return (sum);
}
