#include "main.h"
#include <stdio.h>

/**
 * _isupper - checking if the characters are lower case
 * @c: checking the character
 * Return: return 1 if the character is uppercase else retun 0
 *
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
		return (0);
}
