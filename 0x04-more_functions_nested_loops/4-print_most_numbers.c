#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - function to print most numbers
 * Return: return nothing
 *
 */

void print_most_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
		if (n != 50 && n != 52)
			putchar(n);
	putchar('\n');
}
