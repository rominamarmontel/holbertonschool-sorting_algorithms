#include "sort.h"
/**
 * insertion_sort_list - comparing 1st & 2nd elements to check which one is greater
 * @list:list of number
 * Return: None
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp = NULL;

	if (list == NULL || (*list)->next == NULL)
		return;

	temp = *list;
	while (temp->next)
	{
		if (temp->n > temp->next->n)
		{
			if (temp->next == NULL && temp->prev == NULL)
			{
				temp->next->prev = NULL;
				temp->prev = temp->next;
				temp->next = NULL;
				temp->prev->next = temp;
			}
			else if (temp->prev == NULL)
			{
				temp->next->prev = NULL;
				temp->prev = temp->next;
				temp->next->next->prev = temp;
				temp->next = temp->prev->next;
				temp->prev->next = temp;
			}
			else if (temp->next == NULL)
			{
				temp->next->prev = temp->prev;
				temp->prev = temp->next;
				temp->prev->prev->next = temp->next;
				temp->next = NULL;
				temp->prev->next = temp;
			}
			else
			{
				temp->next->prev = temp->prev;
				temp->prev = temp->next;
				temp->next->next->prev = temp;
				temp->next->prev->next = temp->next;
				temp->next = temp->next->next;
				temp->prev->next = temp;
			}
			print_list(*list);
			while(temp->prev)
			{
				temp = temp->prev;
			}
			continue;
		}
		temp = temp->next;
	}
}
