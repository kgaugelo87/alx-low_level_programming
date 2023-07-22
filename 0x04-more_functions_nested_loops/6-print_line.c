#include "main.h"

/**
 * print_line - drawing a straight line
 * @n: adding number of times
 * Return: Always return the value of (0)
 *
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
