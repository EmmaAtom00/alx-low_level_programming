#include <stdio.h>

/**
 * main - printing all the numbers in base 16
 *
 * Return: always return 0 to denote the program is a success
 *
 */

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}

	for (num = 'a'; num <= 'f'; num++)
	{
		putchar(num);
	}

	putchar('\n');
	return (0);
}
