#include <stdio.h>

/**
 * main - print the combination of 3 different number combinations
 *
 * Return: always return 0 for sucess
 *
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 9; i++)
	{
		for (j = 1; j < 9; j++)
		{
			for (k = 2; k < 9; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
			}
		}
	}

	putchar('\n');

	return (0);
}
