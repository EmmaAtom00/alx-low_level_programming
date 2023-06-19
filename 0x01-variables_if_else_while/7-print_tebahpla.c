#include <stdio.h>

/**
 * main - print the reverse of an alphabet
 *
 * Return: always return 0 (success)
 *
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
