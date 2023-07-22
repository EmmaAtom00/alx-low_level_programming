#include <stdio.h>

/**
 * main - prints 1 - 100 but print fizz when a number is a
 * multiple of 3 and buzz if of 5 then fizzbuzz if both
 * Return: return 0 for success
 */

int main(void)
{
	int i;
	int n;
	int k;

	for (i = 1; i < 101; i++)
	{
		n = i % 3;
		k = i % 5;
		if (n == 0 && k == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			if (n == 0)
			{
				printf("Fizz");
			}
			else if (k == 0)
			{
				printf("Buzz");
			}
			else
			{
				printf("%d", i);
			}
		}
		if (i != 100)
		{
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
