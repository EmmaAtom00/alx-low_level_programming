#include "3-calc.h"

/**
 * op_add -  returns the sum of a and b
 * @a: firt number
 * @b: second number
 * Return: return the sum of both numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns teh difference of a and b
 * @a: the first number
 * @b: the second number
 * Return: return the difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b
 * @a: first num
 * @b: second num
 * Return: return product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of the division
 * of a and b
 * @a: first num
 * @b: second num
 * Return: returns the result of division
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of a and b
 * @a: firts num
 * @b: second num
 * Return: returns the modulus
 */

int op_mod(int a, int b)
{
	return (a % b);
}
