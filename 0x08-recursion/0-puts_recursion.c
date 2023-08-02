#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: out input
 * Return: Always return a value of (0)
 *
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
