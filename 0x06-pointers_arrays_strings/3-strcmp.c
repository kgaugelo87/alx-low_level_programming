#include "main.h"

/**
 * _strcmp - comparing two string values
 * @s1: number 1
 * @s2: number 2
 * Return: return s1 - s2
 *
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
