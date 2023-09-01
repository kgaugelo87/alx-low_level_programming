#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: our number
 * @m: out other number
 * Return: the number of bits
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x;
	int num = 0;
	unsigned long int cur_num;
	unsigned long int output = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		cur_num = output >> x;

		if (cur_num & 1)
		{
			num++;
		}
	}
	return (num);
}
