#include "main.h"
#include <stdio.h>

/**
 * _isdigit - determines the checked digit (0 through 9)
 *@c: checks the character
 * Return: return 1 ifthe character c is a digit else return 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
