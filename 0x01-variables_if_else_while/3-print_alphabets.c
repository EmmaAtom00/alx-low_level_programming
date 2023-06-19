#include <stdio.h>

/**
 * main - print alphabet in lower lcase and uppercase
 *
 * Return: alwayas retun 0 (succcess)
 */

int main(void)
{
	char u;
	char l;

	for (u = 'a'; u <= 'z'; u++)
	{
		putchar(u);
	}

	for (l = 'A'; l <= 'Z'; l++)
	{
		putchar(l);
	}

	putchar('\n');
}
