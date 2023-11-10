#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of all parameters
 * @...: variable numbers of parameters
 * Return: Sum of parameters,otherwise 0 if n==0
 */
int sum_them_all(const unsigned int n, ...)
{
	 unsigned int i, sum, x;
	va_list args;

	va_start(args, n);
	for (i = sum = 0; i < n; i++)
	{
		x = va_arg(args, int);
		if (n == 0)
			return (0);
		else if (n > 0)
			sum = sum + x;
	}
	va_end(args);
	return (sum);
}


