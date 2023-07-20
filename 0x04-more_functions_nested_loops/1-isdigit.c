#include <stdio.h>
#include "main.h"

/**
 * _isdigit - check if a character is a digit
 *
 * @c: the character to be checked
 *
 * Return: always return 0 (success)
 *
 */

int _isdigit(int c)
{
	if ((c <= '0') && (c >= '9'))
	{
		return (1);
	}
	return (0);
}
