#include "main.h"

/**
 * _islower - prints 1 is result is c
 * @c: check character
 * Return: always returns 0
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
