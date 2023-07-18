#include "main.h"

/**
 * print_sign - prints signs of a number
 * @n: check numbers
 * Return: return 1 if is a positive number, print -1 if negetive
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}

