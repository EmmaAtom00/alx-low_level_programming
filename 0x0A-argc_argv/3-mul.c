#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 * @argc: The argument count
 * @argv: the argument vector
 * Return: return 0
 */

int main(int argc, char **argv)
{
	int product;

	if (argv[1] == NULL)
	{
		printf("Error\n");
	}
	else if (argc == 3)
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", product);
	}
	else
		printf("Error\n");
	return (0);
}
