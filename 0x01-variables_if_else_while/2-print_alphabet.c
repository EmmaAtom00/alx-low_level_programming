#include <stdio.h>

/**
 * main - print a-z in lowercase
 *
 * Return: always return 0 (success)
 *
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
