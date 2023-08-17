#include <stdio.h>

/**
 * numlength - returns the length of a string
 * @num: operand number
 * Return: number of digits
 */

int numlength(int num)
{
	int length = 0;

	if (!num)
	{
		return (1);
	}
	while (num)
	{
		num = num / 10;
		length += 1;
	}
	return (length);
}
/**
 * main - prints the first 98 fibonaci sequences
 * Return: 0
 */

int main(void)
{
	unsigned long f1 = 1, f2 = 2, tmp, mx = 100000000, flo = 0, f2o = 0, tmpo = 0;
	short int i = 1, initia10s;

	while (i <= 98)
	{
		if (flo > 0)
			printf("%lu", flo);
		initia10s = numlength(mx) - 1 - numlength(f1);
		while (flo > 0 && initia10s > 0)
		{
			printf("%i", 0);
			initia10s--;
		}
		printf("%lu", f1);
		tmp = (f1 + f2) % mx;
		tmpo = flo + f2o + (f1 + f2) / mx;
		f1 = f2;
		flo = f2o;
		f2 = tmp;
		f2o = tmpo;
		if (i != 98)
			printf(", ");
		else
			printf("\n");
		i++;
	}
	return (0);
}
