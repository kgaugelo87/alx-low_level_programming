#include "main.h"

/**
 * more_numbers - display numbers 0 to 14, 10 times
 *
 * Return: always return void
 *
 */
void more_numbers(void)
{
	int x, y;

	for (x = 0; x <= 14; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y >= 10)
			_putchar('1');
			_putchar(y % 10 + '0');
		}
		_putchar('\n');
	}
}

