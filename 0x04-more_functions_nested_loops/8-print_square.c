#include <stdio.h>
#include "main.h"

/**
 * print_square - a function to print a square
 * @size: the size of the square
 * Return: return nothing
 */

void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
		putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			putchar('#');
		putchar('\n');
	}
}
