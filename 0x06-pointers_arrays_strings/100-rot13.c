#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: point to string
 * Return: *s
 *
 */
char *rot13(char *s)
{
	int i;
	int j;
	char info[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char inforot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == info[j])
			{
				s[i] = inforot[j];
				break;
			}
		}
	}
	return (s);
}
