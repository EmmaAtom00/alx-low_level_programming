#include <stdio.h>

/**
 * main - A program that prints all the arguments passed to it
 * @argc: argument count
 * @argv: argument vector
 * Return: return (0)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
