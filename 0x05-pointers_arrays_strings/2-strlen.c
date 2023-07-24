#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: our string input
 * Return: the length of our string
 *
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
