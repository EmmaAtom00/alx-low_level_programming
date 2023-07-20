#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print the numbers from 0 to 9 followed by a new line
 *
 * Return: return nothing
 *
 */

void print_numbers(void)
{
	int i;
	int count;

	count = 0;

	for (i = 48; i <= 58; i++)
	{
		count += 1;
		putchar(i);
	}

	putchar('\n');
}
