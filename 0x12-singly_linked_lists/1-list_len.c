#include "lists.h"
/**
 * list_len - return then number of element in a list.
 * @h: singly linked list.
 * Return: number of element in the list.
 */

size_t list_len(const list_t *h)
{
	size_t nelem;

	nelem = 0;
	while (h != NULL)
	{
		h = h->next;
		nelem++;
	}
	return (nelem);
}
