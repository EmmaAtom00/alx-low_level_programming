#include "main.h"

/**
 * _puts_recursion - Function that prints a string, followed by a new line
 * @s: The string to be printed
 * Return: Return nothing
 */

void _puts_recursion(char *s)
{
	putchar(*s);
	s++;
	
	if (*s)
	{
		_puts_recursion(s);
	}
	else
	{
		putchar('\n');
	}
}
