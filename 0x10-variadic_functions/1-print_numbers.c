#include "variadic_functions.h"

/**
 * print_numbers - funtion that prints numbers, followed by a new line
 * @separator: the string between numbers
 * @n: the numbers of integers
 * Return: always return 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, int));
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(arg);
}
