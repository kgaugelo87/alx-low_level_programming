#include <stdio.h>
#include <ctype.h>

/**
 *  main - displaying alphabetic letters
 *
 *  Return: always retuns the value (0)
 *
 */
int main(void)
{
	char alphabets = 'a';

	while (alphabets <= 'z')
	{
		putchar(alphabets);
		alphabets += 1;
	}
	putchar('\n');
	return (0);
}
