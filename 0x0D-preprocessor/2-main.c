#include <stdio.h>

/**
 * main - A program that prints the name of the
 * file it was compiled from, followed by a new line
 * Standard library is allowed
 *
 * Return: return 0 for success
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
