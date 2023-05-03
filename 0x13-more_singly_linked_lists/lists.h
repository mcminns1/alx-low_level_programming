#ifndef LISTS_H
#define LISTS_H
#include <string.h>
#include <stdio.h>

/**
* struct listint_s - singly linked list
* @n: integer
* @next: points to the next node
* Descriptioin: Singly linked list node structure for
* project
*/

typedef struct listint_s
{
	int n;
	struct listint_n *next;
} listint_t;

size_t print_listint(const listint_t *h);



#endif
