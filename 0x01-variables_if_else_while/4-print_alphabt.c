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
	
	while (lower <= 'z')
	{
		if (lower == 'e' || lower == 'q')
		{
			lower += 1;
		}
		else
		{
			putchar(lower);
			lower += 1;
		}
		putchar('\n');
		return (0);
	}
}
