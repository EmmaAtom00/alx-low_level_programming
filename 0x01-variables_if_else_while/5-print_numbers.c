#include <stdio.h>

/**
 * main - print 0 - 10
 *
 * Return: always return 0 (success)
 *
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}

	putchar('\n');

	return (0);
}
