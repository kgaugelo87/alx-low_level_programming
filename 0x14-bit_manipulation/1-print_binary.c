#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: our number
 * Return: always return void
 *
 */
void print_binary(unsigned long int n)
{
	int x, bin_num = 0;
	unsigned long int cur_num;

	for (x = 63; x >= 0; x--)
	{
		cur_num = n >> x;
		
		if (cur_num & 1)
		{
			_putchar('1');
			bin_num++;
		}
		else if (bin_num)
		{
			_putchar('0');
		}
	}
	if (!bin_num)
	{
		_putchar('0');

	}
}
