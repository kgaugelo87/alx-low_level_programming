#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - a function that returns the value of 0
 * @n: the value that is set
 * @index: is the index starting from 0 of the bit to get
 * Return: set the value to 1 if successful else -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	/** conditional statement that sets the value to 0 or at the beginning **/
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
