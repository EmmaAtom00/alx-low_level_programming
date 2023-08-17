#include "variadic_functions.h"

/**
 * print_strings - function that prints strings followed by a new line
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 * Return: return 0 for success
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *str;

	va_start(arg, n);

		for (i = 0; i < n; i++)
		{
			str = va_arg(arg, char *);
			if (str == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", str);

				if (separator && i != n - 1)
					printf("%s", separator);
			}
		}

		putchar('\n');

	va_end(arg);
}
