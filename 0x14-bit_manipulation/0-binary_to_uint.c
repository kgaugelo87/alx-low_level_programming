#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: converted number
 *
 */
unsigned int binary_to_uint(const char *b)
{
	int bin_num;
	unsigned int con_num = 0;

	if (!b)
		return (0);

	for (bin_num = 0; b[bin_num]; bin_num++)
	{
		if (b[bin_num] < '0' || b[bin_num] > '1')
			return (0);
		con_num = 2 * con_num + (b[bin_num] - '0');
	}
	return (con_num);
}
