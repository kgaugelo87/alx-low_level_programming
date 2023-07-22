#include "main.h"

/**
 * print_square - display a square
 * @size: the size of our square
 * Return: Always return the value (0)
 *
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
