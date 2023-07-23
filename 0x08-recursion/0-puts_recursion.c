#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - function that prints a string followes by a new line
 * @s: the string to be printed
 * Return: return nothing
 */

void _puts_recursion(char *s)
{
	putchar(*s);
	if (*s != '\0')
		_puts_recursion(s);
}
