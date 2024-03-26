#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 * @h: head of our first node
 * Return: the number of nodes
 *
 */

size_t print_dlistint(const dlistint_t *h)
{
	int numbers;

	numbers = 0;

	if (h == NULL)
		return (numbers);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		numbers++;
		h = h->next;
	}

	return (numbers);
}
