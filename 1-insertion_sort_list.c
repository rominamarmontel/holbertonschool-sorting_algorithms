#include "sort.h"

/**
 * insertion_sort_list - comparing 1st & 2nd elements and give order
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
			if (temp->next->next == NULL && temp->prev == NULL)
			{
				swap_prev_and_next_null(temp);
				*list = temp->prev;
			}
			else if (temp->prev == NULL)
			{
				swap_prev_null(temp);
				*list = temp->prev;
			}
			else if (temp->next->next == NULL)
				swap_next_null(temp);
			else
				swap_no_null(temp);
			print_list(*list);
			while (temp->prev)
				temp = temp->prev;
			continue;
		}
		temp = temp->next;
	}
}
/**
 * swap_prev_and_next_null - comparing 1st & 2nd elements and give order
 * @temp:list of number
 */
void swap_prev_and_next_null(listint_t *temp)
{
	temp->next->prev = NULL;
	temp->prev = temp->next, temp->next = NULL;
	temp->prev->next = temp;
}
/**
 * swap_prev_null - comparing 1st & 2nd elements and give order
 * @temp:list of number
 */
void swap_prev_null(listint_t *temp)
{
	temp->prev = temp->next;
	temp->next->next->prev = temp;
	temp->next->prev = NULL;
	temp->next = temp->next->next;
	temp->prev->next = temp;
}
/**
 * swap_next_null - comparing 1st & 2nd elements and give order
 * @temp:list of number
 */
void swap_next_null(listint_t *temp)
{
	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	temp->next->next = temp;
	temp->prev = temp->next, temp->next = NULL;
}
/**
 * swap_no_null - comparing 1st & 2nd elements and give order
 * @temp:list of number
 */
void swap_no_null(listint_t *temp)
{
	temp->next->prev = temp->prev;
	temp->prev = temp->next;
	temp->next->next->prev = temp;
	temp->next->prev->next = temp->next;
	temp->next = temp->next->next;
	temp->prev->next = temp;
}
