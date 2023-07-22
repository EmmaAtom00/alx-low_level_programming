#include <stdio.h>
#include "main.h"

/**
 * print_line - print a straight line in the terminal.
 * @n: the numbers of line to be printed
 * Return: return nothing
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		putchar('_');
	putchar('\n');
}
