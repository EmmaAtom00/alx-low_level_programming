#include <stdio.h>

/**
 * main - print and exclude 'q' and 'e'
 *
 * Return: always return 0 (success)
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'e' && a != 'q')
		{
			putchar(a);
		}
	}
	putchar('\n');

	return (0);
}
