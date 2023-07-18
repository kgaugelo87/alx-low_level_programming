#include "main.h"

/**
 * print_alphabet - printing out alphabets in lower case
 *
 * Return: voice return
 *
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
