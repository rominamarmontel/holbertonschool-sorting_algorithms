#include "sort.h"
/**
 * selection_sort - Swap the first element with the rest of the elements
 * @array:list of number
 * @size:size of array
 * Return: None
 */
void selection_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	size_t min;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[min] > array[j])
			array[min] = array[j];
		}
		swap(&array[min], &array[i]);
		print_array(array, size);
	}
}
/**
 * swap - swap the 2 elements
 * @x:element
 * @y:element
 * Return: None
 */
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
