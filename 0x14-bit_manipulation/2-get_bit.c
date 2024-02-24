#include "main.h"

/**
 * get_bit - returns the value of a bit
 * @n: bits to be checked
 * @index: is the index of a bit
 * Return: bit at index else return -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	/** Decalaration of variables **/
	unsigned long int x;
	unsigned long int y;

	/** conditiona statement to return a bit index else display error **/
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	x = 1 << index;
	y = n & x;
	if (y == x)
		return (1);
	return (0);
}
