#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: our array name
 * @n: the number of the element of the array
 * Return: return a and n
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
