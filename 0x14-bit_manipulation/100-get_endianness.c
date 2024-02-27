#include "main.h"

/**
 * get_endianness - A function that checks the endianness
 * Return: 0 if endian is big and 1 if endian is little
 */

int get_endianness(void)
{
	/** Declaration and initialising our variables **/
	int a = 1;
	char *b;

	/** Checking if our edianness is big or small **/
	b = (char *)&a;
	return (*b);
}
