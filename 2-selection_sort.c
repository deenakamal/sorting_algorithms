#include "sort.h"
/**
 * selection_sort -  a function that uses selection algorithm.
 * @array: array to be sorted.
 * @size: size of array.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, minIdx;

	if (array == NULL || size == 0)
		return;
	for (i = 0; i < size - 1 ; i++)
	{
		minIdx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[minIdx])
			{
				minIdx = j;
			}
		}
		if (minIdx != i)
		{
			swap(&array[minIdx], &array[i]);
			print_array(array, size);
		}
	}
}
/**
 * swap - function that used to swap two elements.
 * @n1: first element to be swaped.
 * @n2: second element to be swaped.
 */
void swap(int *n1, int *n2)
{
	int temp;
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}
