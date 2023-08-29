#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: our pointer
 * Return: always return (0)
 */
void free_listint(listint_t *head)
{
	listint_t *i;

	while (head)
	{
		i = head->next;
		free(head);
		head = i;
	}
}
