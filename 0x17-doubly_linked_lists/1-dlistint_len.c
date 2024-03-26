#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * dlistint_len - Number of elements in our linked list
 * @h: Our head to our first node
 * Return: Number of elements
 *
 */

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int number = 0;
	const dlistint_t *list;

	list = malloc(sizeof(dlistint_t));
	list = h;

	if (list == NULL)
	{
		return (0);
	}
	while (list)
	{
		list = list->next;
		number++;
	}
	return (number);
}
