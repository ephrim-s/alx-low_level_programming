#include "lists.h"

/**
  * print_dlistint - displays all elements of dlistint_t
  * @h: points to the node
  *
  * Return: num of nodes
  */

size_t print_dlistint(const dlistint_t *h)
{
	size_t x;

	for (x = 0; h != NULL; x++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (x);
}
