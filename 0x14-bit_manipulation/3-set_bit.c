#include "main.h"

/**
 * set_bit - a function that sets the value of bits
 * @n: number of nits to be set
 * @index: is the index starting from 0 of the bit to be set
 * Return: the value of 1 on success, else write -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	/** Declaration of variables **/
	unsigned long int value;

	/** conditional statement that sets the bit value to 1 if success **/
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	value = 1 << index;
	*n = *n | value;
	return (1);
}
