#include <stdio.h>
#include 'main.h'

/*
 * main - check if a letter/word is an uppercase
 *
 * @c: the letter/word to be checked
 *
 * Return: always 0 (success)
 *
 */

int _isupper(int c)
{
	if(c >= A && c <= Z)
	{
		_putchar('1');
	}
	
	else if(c >= 0 && c <= 9)
	{
		_putchar('0');
	}

	return (0);
}
