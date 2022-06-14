#include "sort.h"
/**
 * insertion_sort_list - comparing 1st & 2nd elements to check which one is greater
 * @list:list of number
 * Return: None
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp = NULL, *temp2 = NULL;

	if (list == NULL || (*list)->next == NULL)
		return;

	temp = *list;
	temp2 = temp->next;
	while (temp->next)
	{
		if (temp->n > temp2->n)
		{
			if (temp2->next == NULL && temp->prev == NULL)
			{
				temp->next = NULL;
				temp2->next = temp;
				temp->prev = temp2;
				temp2->prev = NULL;
			}
			if (temp->prev == NULL)
			{
			        temp->next = temp2->next;
				temp->prev = temp2;
				temp2->next->prev = temp;
				temp2->prev = NULL;
				temp2->next = temp;
				*list = temp2;
			}
			else if (temp2->next == NULL)
			{
				temp2->prev = temp->prev;
				temp->prev->next = temp2;
				temp2->next = temp;
				temp->prev = temp2;
				temp->next = NULL;
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
			temp2 = temp->next;
			continue;
		}
		temp = temp->next;
		temp2 = temp2->next;
	}
}
