#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_string - print sstrings followed by a new line
 * @separator: the string to be printed between strings
 * @n: the numbers of arguments
 * Return: return nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);
		for (i = 0; i < n; i++)
		{
			if (va_arg(valist, char *))
				printf("%s", va_arg(valist, char *));
			else
				printf("(nil)");
			if (separator && i < n - 1)
				printf("%s", separator);
		}
	va_end(valist);
	printf("\n");
}
