#include "sort.h"
/**
 * insertion_sort_list - comparing 1st & 2nd elements to check which one is greater
 * @list:
 * Return: None
 */
void insertion_sort_list(listint_t **list)
{
    size_t i, j;
    int n = 0;
    size_t key;

    for (i = 1; i < n; i++)
    {
        key = list[i];
        j = j - 1;
        while (j >= 0 && list[i] > key)
        {
            list[j + 1] = list[j];
            j = j- 1;
        }
        list[j + 1] = key;
    }
}
