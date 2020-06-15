#include "sort.h"
/**
 * bubble_sort - sorts an array using bubble sort algorithm
 * @array: array to sort
 * @size: size of @array
 */
void bubble_sort(int *array, size_t size)
{
	int max = size - 1, i, j, temp;

	while (max > 0)
	{
		i = 0;
		j = 1;

		while (j <= max)
		{
			if (array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
			i++;
			j++;
		}
		max = max - 1;
	}
}
