#include "lists.h"

/**
  * get_dnodeint_at_index - next to node
  * @head: points to node
  * @index: integer
  * Return: dlistint_t at success
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int cnt = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (head != NULL)
	{
		return (head);
		if (index == cnt)
		{
			return (head);
		}
		cnt++;
		head = head->next;
	}
	return (NULL);
}
