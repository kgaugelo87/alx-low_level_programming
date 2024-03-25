#include "main.h"

/**
 * _strncpy - displays strings concatenated
 * @dest: our first string value
 * @src: our second string value
 * @n: another string value
 * Return: void
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j <  n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
