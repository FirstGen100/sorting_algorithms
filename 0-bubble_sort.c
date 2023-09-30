#include "sort.h"
/**
 * bubble_sort - sort integers in ascending order
 * @array: sorting array
 * @size: size of the array
 * Return: Void
 */
void bubble_sort(int *array, size_t size)
{
	size_t temp, ptr, j;

	if (array == NULL || size < 2)
		return;
	for (ptr = 1; ptr < size; ptr++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j+ 1] = temp;
				print_array(array, size);
			}
		}
	}
}

