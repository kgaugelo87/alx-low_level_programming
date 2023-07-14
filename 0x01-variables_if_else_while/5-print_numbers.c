#include <stdio.h>

/**
 * main - function to display numbers
 *
 * Return: always returns the value (0)
 *
 */
int main(void)
{
	int i;

	while (i < 10)
	{
		printf("%d", i);
		i += 1;
	}
	printf("\n");
	return (0);
}
