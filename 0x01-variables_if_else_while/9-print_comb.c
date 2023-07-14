#include <stdio.h>

/**
 * main - prints all possible combinations of single digit numbers
 *
 * Return: always returns (0)
 *
 */
int main(void)
{
	int a = '0';

	while (a <= '9')
	{
		putchar(a);
		if (a != '9')
		{
			putchar(',');
			putchar(' ');

		}
		++a;
	}
	putchar('\n');
	return (0);
}
