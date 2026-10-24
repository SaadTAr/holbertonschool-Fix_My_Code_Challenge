#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Prints all the elements of a list
 * @h: A pointer to the first element of a list
 * Return: The number of elements in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n;

	for (n = 0; h != NULL; n++, h = h->next)
		printf("%d\n", h->n);
	return (n);
}
