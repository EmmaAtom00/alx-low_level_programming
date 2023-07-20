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

	if (*separator == '\0')
	{
		;
	}

	va_start(valist, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(valist, int));
			if (separator && i < n - 1)
				printf("%s", separator);
		}
	va_end(valist);
	printf("\n");
}
