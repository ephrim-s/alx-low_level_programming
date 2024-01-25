#include "lists.h"

/**
  * sum_dlistint - add up all the datea of dlistint_t
  * @head: points to node
  * Return: results of data
  */

int sum_dlistint(dlistint_t *head)
{
	int rslt = 0;

	while (head != NULL)
	{
		rslt += head->n;
		head = head->next;
	}
	return (rslt);
}
