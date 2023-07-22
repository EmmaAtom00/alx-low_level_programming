#include <stdio.h>

/**
 * main - prints 1 - 100 but print fizz when a number is a
 * multiple of 3 and buzz if of 5 then fizzbuzz if both
 * Return: return 0 for success
 */

int main()
{
	int i;
	int n;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0)
		{
			if (i % 5 != 0)
			{
				n = i;
				printf("Fizz");
				if(i != 101)
					putchar(' ');
			}
		}
		else if (i % 5 == 0)
		{
			n = i;
			printf("Buzz");
			if(i != 101)
				putchar(' ');
		}
		if (i % 3 == 0 && i % 5 == 0)
		{
			n = i;
			printf("FizzBuzz");
			if(i != 101)
				putchar(' ');
		}
		else if (i != n)
		{
			printf("%d", i);
			if(i != 100)
				putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
