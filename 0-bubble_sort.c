#include "sort.h"
/**
 * bubble_sort - comparing 1st & 2nd elements to check which one is greater
 * @array:list of number
 * @size:size of array
 * Return: None
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
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
