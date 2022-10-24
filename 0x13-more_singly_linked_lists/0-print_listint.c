#include "lists.h"

/**
* print_listint - the program prints all the elments of a list
* @h: head of a list
*
* Return: number of nodes
*/

size_t print_listint(const listint *h)
{
	size_t n_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n_nodes++;
	}
	return (n_nodes);
}
