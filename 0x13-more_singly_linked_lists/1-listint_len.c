#include "lists.h"

/**
 * listint_len - fxn that returns the num of elements in a linked  list
 * @h: pointer to the linke list (listint_t)
 * Return: number  of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	for (; h; h = h->next)
	{
		num++;
	}
	return (num);
}
