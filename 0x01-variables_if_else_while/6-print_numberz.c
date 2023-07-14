#include <stdio.h>
#include <ctype.h>

/**
 * main -function to display both lower and upper case letters
 *
 * Return: always return the value of (0)
 *
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	putchar('\n');

	return (0);
}
