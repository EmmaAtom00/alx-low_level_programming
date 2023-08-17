#include "3-calc.h"

/**
 * main - a program that prints the opcode of its own main function
 * @argc: the number of arguments
 * @agv: array of strings
 * Return: return 0 for success
 */

int main(int argc, char **argv)
{
	int arg1, i;
	char *main_ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	arg1 = atoi(argv[1]);

	if (arg1 < 0)
	{
		printf("Error\n");
		exit(2);
	}

	main_ptr = (char *)main;

	for (i = 0; i < arg1; i++)
	{
		printf("%02hhx ", main_ptr[i]);
		if (i == arg1 - 1)
			putchar('\n');
	}

	return (0);
}
