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

	for (i = 0; i <= 9; i++)
	{
		count += 1;
		putchar(count);
	}

	putchar('\n');
}
