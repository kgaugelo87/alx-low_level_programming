#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * malloc_checked - allocates memory
 * @b: the size of the memory
 * Return: pointer to the allocated memory
 *
 */
void *malloc_checked(unsigned int b)
{
	char *output;

	output = malloc((b));
	if (output == NULL)
		exit(98);
	else
		return (output);
}
