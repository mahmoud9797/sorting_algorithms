#include "sort.h"
/**
 *bubble_sort - function to sort an array
 *@array: the array which will be sorted
 *@size: the array size
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;
	int f = 0;

	if (array == NULL || size == 0)
	{
		return;
	}
	for (i = 0; i < size - 1; i++)
	{
		f = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				f = 1;
				print_array(array, size);
			}
		}
		if (f == 0)
		{
			break;
		}
	}
}
