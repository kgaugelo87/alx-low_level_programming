#include "main.h"

/**
 * binary_to_uint - function converts a binary number
 * @b: pointer to our binary number to be stored
 *
 * Return: On success display our converted number else print 0
 */
unsigned int binary_to_uint(const char *b)
{
	int c;
	unsigned int value;

	value = 0;
	if (!b)
		return (0);
	for (c = 0; b[c] != '\0'; c++)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);
	}
	for (c = 0; b[c] != '\0'; c++)
	{
		value <<= 1;
		if (b[c] == '1')
			value += 1;
	}
	return (value);
}
