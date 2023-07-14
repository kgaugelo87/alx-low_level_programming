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
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower += 1;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		upper += 1;
	}
	putchar('\n');
	return (0);
}
