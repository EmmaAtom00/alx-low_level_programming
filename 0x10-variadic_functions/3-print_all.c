#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: constant pointer to a constant character
 * Description: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list arg;
	float f;
	int i = 0, k = 0, j;
	char *str;
	int inte;
	const char t_arg[] = "cifs";

	va_start(arg, format);

	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && k)
			{
				printf(", ");
				break;
			}
			j++;
		}
		switch (format[i])
		{
			case 'c':
				putchar(va_arg(arg, int));
				break;
			case 'i':
				inte = va_arg(arg, int);
				printf("%d", inte);
				break;
			case 'f':
				f = va_arg(arg, double);
				printf("%f", f);
				break;
			case 's':
				str = va_arg(arg, char *);
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		}
		i++;
	}
	putchar('\n');
	va_end(arg);
}
