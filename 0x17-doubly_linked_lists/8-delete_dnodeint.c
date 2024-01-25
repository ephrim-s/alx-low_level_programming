#include "lists.h"

/**
  * delete_dnodeint_at_index - clears node at index
  * @head: begening of node
  * @index: unique id
  * Return: 1 on success and -1 on failure
  */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node;
	unsigned int cnt;

	if (*head == NULL)
		return (-1);

	node = *head;
	if (index == 0)
	{
		*head = node->next;
		if (node->next != NULL)
			node->next->prev = NULL;

		free(node);
		return (1);
	}

	for (cnt = 0; node != NULL && cnt < index - 1 ; cnt++)
		node = node->next;

	if (node == NULL || node->next == NULL)
		return (-1);

	if (node->next->next != NULL)
	{
		node->next = node->next->next;
		free(node->next->prev);
		node->next->prev = node;
		return (1);
	}
	else
	{
		free(node->next);
		node->next = NULL;
		return (1);
	}
	return (-1);
}
