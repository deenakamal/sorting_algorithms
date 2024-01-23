#include "sort.h"
/**
 * quick_sort - a function that uses quick sort algorithm.
 * @array: array to be sorted.
 * @size: size of array.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quickSort_func(array, 0, size - 1, size);
}
/**
 * quickSort_func - sorting array called function recursive.
 * @array: array to be sorted.
 * @low: low index.
 * @high: high index.
 * @size: size.
 */
void quickSort_func(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = partition(array, low, high, size);
		quickSort_func(array, low, pivot - 1, size);
		quickSort_func(array, pivot + 1, high, size);
	}
}
/**
 * partition - Lomuto partition scheme
 * @array: array to be sorted.
 * @low: left index.
 * @high: right index.
 * @size: size.
 * Return: index of pivoit place.
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1, j;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap_func(&array[j], &array[i]);
				print_array(array, size);
			}
		}
	}
	if (i + 1 != high)
	{
		swap_func(&array[i + 1], &array[high]);
		print_array(array, size);
	}

	return (i + 1);
}
/**
 * swap_func - a function that swaps two elements
 * @n1: first element.
 * @n2: second element.
 */
void swap_func(int *n1, int *n2)
{
	int temp;

	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}
