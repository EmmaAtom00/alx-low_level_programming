#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - function to print diagonal lines
 * @n: numbers of times to print diagonal lines
 * Return: return nothing
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
		putchar('\n');

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i + 1; j++)
		{
			if (j == i)
				putchar('\\');
			else
				putchar(' ');
		}
		putchar('\n');
	}
}
