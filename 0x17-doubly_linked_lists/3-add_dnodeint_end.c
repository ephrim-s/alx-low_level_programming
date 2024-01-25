#include "lists.h"

/**
  ** add_dnodeint_end - puts a new node
  * @head: head of node
  * @n: constant integer in the list
  * Return: dlistint_t at success
  */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *lst = NULL, *end = *head;

	lst = malloc(sizeof(dlistint_t));

	if (lst == NULL)
		return (NULL);

	lst->n = n;
	lst->prev = NULL;
	lst->next = NULL;

	if (*head == NULL)
	{
		*head = lst;
		return (*head);
	}

	while (end->next != NULL)
		end = end->next;

	lst->prev = end;
	end->next = lst;

	return (lst);
}
