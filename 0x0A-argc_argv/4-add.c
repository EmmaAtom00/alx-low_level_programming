#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a progrma that adds all posituve integer
 * @argc: argument count
 * @argv: argument vector
 * Return: return 0 for success
 */

int main(int argc, char **argv)
{
	int sum = 0;
	int i;
	char *p;
	int num;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			num = strtol(argv[i], &p, 10);
			if (!*p)
				sum += num;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);

	return (0);
}
