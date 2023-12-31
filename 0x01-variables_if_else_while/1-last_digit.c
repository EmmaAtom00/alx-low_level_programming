#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - print the last digit
 *
 * Return: always return 0 (success)
 */

int main(void)
{
	int ldg;
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	ldg = n % 10;

	if (ldg > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, ldg);
	else if (ldg == 0)
		printf("Last digit of %d is %d and is 0\n", n, ldg);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ldg);
	return (0);
}
