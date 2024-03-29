#include "lists.h"

/**
  * dlistint_len - checks the num of nodes
  * @h: points to the node
  *
  * Return: num of nodes
  */

size_t dlistint_len(const dlistint_t *h)
{
	size_t x;

	for (x = 0; h != NULL; x++)
		h = h->next;
	return (x);
}
