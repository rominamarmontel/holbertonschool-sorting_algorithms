#include "sort.h"
/**
 * quick_sort_part - Split the column into two parts and align each part
 * @array:list of number
 * @size:size of array
 * @left:left position of pivot
 * @right:right position of pivot
 * Return: None
 */
void quick_sort_part(int *array, int left, int right, size_t size)
{
	int pivot;

	if  (left >= right || left < 0)
		return;
	pivot = partition(array, left, right, size);/*execute func partition*/
	quick_sort_part(array, left, pivot - 1, size);/*left position*/
	quick_sort_part(array, pivot + 1, right, size);/*right position*/
}
/**
 * quick_sort - from quick_sort to quick_sort_part
 * @array:list of number
 * @size:size of array
 * Return: None
 */
void quick_sort(int *array, size_t size)
{
	quick_sort_part(array, 0, size, size - 1);
}
/**
 * partition - the given array around the picked pivot
 * @array:list of number
 * @size:size of array
 * @left:right position
 * @right:left position
 * Return: x + 1
 */
int partition(int *array, int left, int right, size_t size)
{
	int pivot = array[right];/*partition to be placed at right position*/
	int x = left - 1;/*Index of smaller element, start from -1*/
	int y;/*loop variable*/

	for (y = left; y <= right - 1; y++)
	{
		if (array[y] <= pivot)/*If current element is smaller than the pivot*/
		{
			x++;/*increment index of smaller element*/
			if (x != y)
			{
				swap(&array[x], &array[y]);
				print_array(array, size);
			}
		}
	}
	swap(&array[x + 1], &array[right]);/*swap index x +1 and pivot*/
	print_array(array, size);
	return (x + 1);
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
