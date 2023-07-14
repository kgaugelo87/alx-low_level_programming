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
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
		putchar(alpha);
	putchar('\n');

	return (0);
}
