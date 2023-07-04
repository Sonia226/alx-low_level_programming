#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function that adds a new node to the beginning of a list
 * @head: double pointer to the list (list_t)
 * @str: new string to be added
 * Return: the & of the new input
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

		while (str[len])
			len++;
		new = malloc(sizeof(list_t));
		if (!new)
			return (NULL);
		new->str = strdup(str);
		new->len = len;
		new->next = (*head);
		(*head) = new;

		return (*head);
}
