#include "sort.h"
#include <stdio.h>

/**
 * insertion_sort_list - sorts a list
 * using the insertion sort algorithm
 *
 * @list: doubly linked list
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *pntr, *temp;

	if (!list)
		return;

	pntr = *list;

	while (pntr)
	{
		while (pntr->next && (pntr->n > pntr->next->n))
		{
			temp = pntr->next;
			pntr->next = temp->next;
			temp->prev = pntr->prev;

			if (pntr->prev)
				pntr->prev->next = temp;

			if (temp->next)
				temp->next->prev = pntr;

			pntr->prev = temp;
			temp->next = pntr;

			if (temp->prev)
				pntr = temp->prev;
			else
				*list = temp;

			print_list(*list);
		}
		pntr = pntr->next;
	}
}
