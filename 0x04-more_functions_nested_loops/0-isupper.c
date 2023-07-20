#include <stdio.h>
#include "main.h"

/**
 * _isupper - check if a letter/word is an uppercase
 *
 * @c: the letter/word to be checked
 *
 * Return: always 0 (success)
 *
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
