#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print sstrings followed by a new line
 * @separator: the string to be printed between strings
 * @n: the numbers of arguments
 * Return: return nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *str;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(valist, char*);
		if (str == NULL)
			printf("(nil)");
		else
		{
			printf("%s", str);
			if (i != n - 1)
			{
				if (separator != NULL)
				{
					printf("%s", separator);
				}
			}
		}
	}

	va_end(valist);
	printf("\n");
}
