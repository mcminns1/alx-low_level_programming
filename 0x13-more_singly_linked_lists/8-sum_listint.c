#include "lists.h"

/**
* sum_listint - return the sum of all the data (n)
* of a linked list
* @head: head of list
* return: sum of all the data (n)
*/

int sum_listint(listint_t *head)
{
	int sum = 0;
	
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
