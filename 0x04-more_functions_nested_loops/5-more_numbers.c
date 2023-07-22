#include <stdio.h>
#include "main.h"

/**
 * more_numbers - print more numbers
 * Description: print from 0 to 14
 * Return: return nothing
 *
 */

void more_numbers(void)
{
	int i;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i < 15; i++)
		{
			if(i > 9)
				putchar('0' + i / 10);
			putchar('0' + i % 10);
		}
		putchar('\n');
	}
}
