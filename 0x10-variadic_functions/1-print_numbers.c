#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers followed a new line
 * @separator:vthe white spance between each characters
 * @n: numbers to be printed
 * Return: return the numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);
		for (i = 0; i < n; i++)
		{
			printf("%d%s ", va_arg(valist, int), separator);
		}
	va_end(valist);
}
