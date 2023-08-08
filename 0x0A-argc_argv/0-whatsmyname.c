#include <stdio.h>

/**
 * main - a program that prints its own name
 * @argc: Argument count
 * @argv: argument vector
 * Return: return success (0)
 */

int main(int argc, char **argv)
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
