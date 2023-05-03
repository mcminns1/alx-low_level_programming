#include "lists.h"

/**
* print_listint - Print elements of a singly linked list
* @h: pointer to a list
* return: returns an integer
*/

size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
