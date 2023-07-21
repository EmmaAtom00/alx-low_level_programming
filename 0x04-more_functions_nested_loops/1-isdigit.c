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
	if ((c >= 48) && (c < 58))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
