#include <stdio.h>

/**
 * main -printing all possible different combinations
 *
 * Return: always returns (0)
 *
 */
int main(void)
{
	int x = '0';
	int y = '0';
	int z = '0';

	while (x <= '7')
	{
		while (y <= '8')
		{
			while (z <= '9')
			{
				if (x < y && y < z)
				{
					putchar(x);
					putchar(y);
					putchar(z);
					if (!(x == '7' && y == '8' && z == '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
				z++;
			}
			z = '0';
			y++;
		}
		y = '0';
		x++;
	}
	putchar('\n');
	return (0);
}
