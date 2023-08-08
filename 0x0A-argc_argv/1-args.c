#include <stdio.h>

/**
 * main - print out the number of arguments passed
 * @argc: the argument count
 * @argv: the argument vector
 * Return: return (0)
 */

int main(int argc, char **argv)
{
	(void) **argv;

	printf("%d\n", argc - 1);

	return (0);
}
