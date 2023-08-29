#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: our pointer
 * Return: always return (NULL)
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL)
		return;

	node = *head;
	while (node)
	{
		node = node->next;
		free(node);
	}
	*head = NULL;
}
