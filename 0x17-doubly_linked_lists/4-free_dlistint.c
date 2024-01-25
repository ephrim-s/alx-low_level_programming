#include "lists.h"

/**
  * free_dlistint - free allocated memory to list
  * @head: head of the struct
  * Return: no integer
  */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *lst;

	while (head)
	{
		lst = head;
		head = head->next;
		free(lst);
	}
}
