#include "3-calc.h"
/**
 * main - program to receive the aargument from the user
 * @argc: the number of arguments
 * @argv: the arguments
 * Return: return 0 for success
 */

int main(int argc, char *argv[])
{
	int i, arg1, arg2;
	char c;
	int (*func)(int, int);

	if (argc > 4 || argc < 4)
	{
		printf("Error\n");
		exit(98);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);
	c = *argv[2];

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	if ((c == '/' || c == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	i = func(arg1, arg2);
	printf("%d\n", i);

	return (0);
}
