#include "main.h"

/**
 * _isalpha - prints 1 is the letter c is lower or uppercase
 * @c: checks character
 * Return: 1 if c is lower/upper else something else
 *
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
