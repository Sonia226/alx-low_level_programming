#include "lists.h"
/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * @h: pointer that points to the linled list (listint_t)
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

		for (; h; h = h->next)
		{
			printf("%d\n", h->n);
			num++;
		}
	return (num);
}
