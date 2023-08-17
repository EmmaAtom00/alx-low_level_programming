#include "variadic_functions.h"

/**
 * sum_them_all - function to return sum of parameters
 * @n: number of parameters
 * Return: return the sim of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list arg;

	va_start(arg, n);
	for(i = 0; i < n; i++)
	{
		sum += va_arg(arg, int);
	}
	va_end(arg);

	return (sum);
}
