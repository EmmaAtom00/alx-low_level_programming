#include <stdio.h>

/**
 * main - using putchar alone to print integers from 0 - 9
 *
 * Return: always return 0
 *
 */

int main(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
