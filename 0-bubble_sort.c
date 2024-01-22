#include "sort.h"
/**
 * swap - a function to swap between two elemnets.
 * @n1: first element.
 * @n2: second element.
 */
void swap(int *n1, int *n2)
{
	int temp =  *n1;
	*n1 = *n2;
	*n2 = temp;
}
/**
 * bubble_sort - a function used bubble sorting algorithm.
 * @array: array to be sorted.
 * @size: size of array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int flag = 0;

	if (!array || size == 0)
		return;

	for (i = 0; i < size - 1 ; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j + 1] < array[j])
			{
				swap(&array[j + 1], &array[j]);
				flag = 1;
				print_array(array, size);
			}
		}
		if (flag == 0)
			break;
	}
}
