#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all parameters in the function
 * @n: constant parameter i.e the numbers of arguments to be passed
 * Return: return the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int i, sum = 0;

	va_start(list, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(list, int);
		}
	va_end(list);

	return (sum);
}
