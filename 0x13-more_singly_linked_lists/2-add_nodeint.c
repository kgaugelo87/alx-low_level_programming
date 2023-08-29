#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: is our pointer
 * @n: our node
 * Return: address of the new element, or NULL if it failed
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_nodeint = malloc(sizeof(listint_t));

	if (!head || !new_nodeint)
		return (NULL);

	new_nodeint->next = *head;
	new_nodeint->n = n;
	*head = new_nodeint;

	return (new_nodeint);
}

