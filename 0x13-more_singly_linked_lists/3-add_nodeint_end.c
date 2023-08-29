#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: our pointer
 * @n: new node
 * Return: address of the new element, or NULL if it failed
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_nodeint = malloc(sizeof(listint_t));
	listint_t *nodeint;

	if (!head || !new_nodeint)
		return (NULL);

	new_nodeint->n = n;
	new_nodeint->next = NULL;

	if (!*head)
	{
		*head = new_nodeint;
		return (new_nodeint);
	}
	else
	{
	nodeint = *head;
	while (nodeint->next)
		nodeint = nodeint->next;
	nodeint->next = new_nodeint;
	}
	return (new_nodeint);
}
