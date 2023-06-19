#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - positive number or negative number
 *
 * description: using the control flows to know if the
 * number generated is positive or negative
 *
 * Return: always return 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 0)
		printf("%d is positive", n);
	else if (n < 0)
		printf("%d is negstive", n);
	else
		printf("%d is zero", n);
	return (0);
}
