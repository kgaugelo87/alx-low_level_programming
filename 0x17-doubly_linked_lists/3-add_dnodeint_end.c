#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end -  function that adds a new node at the end of a dlistint_t list
 * @h: head of our first node
 * @n: value of the element
 * Return: the number of nodes
 *
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = temp;
	}
	else
	{
		*head = temp;
	}

	temp->prev = h;

	return (temp);
}
