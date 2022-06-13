#include "sort.h"
/**
 * insertion_sort_list - comparing 1st & 2nd elements to check which one is greater
 * @list:list of number
 * Return: None
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp = NULL;
	int i;

	if (list == NULL || (*list)->next == NULL)
		return;

	temp = *list;
	while (temp->next)
	{
		if (temp->n > temp->next->n)
		{
			i = temp->next->n;
			temp->next->n = temp->n;
			temp->n = i;
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
