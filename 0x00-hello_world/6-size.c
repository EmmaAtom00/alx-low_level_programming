#include <stdio.h>

/**
 * main - printting the size of types
 *
 * Description: using printf ans sizeof functions
 *
 * Return: 0
 */

int main(void)
{
	int num;
	char c;
	long num1;
	long long num2;
	float num3;

	printf("Size of a char: %zu byte(s)\n", sizeof(c));
	printf("Size of a int: %zu byte(s)\n", sizeof(num));
	printf("Size of a long int: %zu byte(s)\n", sizeof(num1));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(num2));
	printf("Size of a float: %zu byte(s)\n", sizeof(num3));
	return (0);

}
