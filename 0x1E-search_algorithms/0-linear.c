#include "search_algos.h"
/**
 * linear_search - finds a value in an array of integers using search function
 * @array: The array to search the value in arrays
 * @size: The array size
 * @value: The value to find in the Array
 *
 * Return: The index of the value found,
 * or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t k = 0;

	if (!array || size == 0)
		return (-1);

	while (k < size)
	{
		printf("Value checked array[%lu] = [%d]\n", k, array[k]);
		if (array[k] == value)
			return (k);
		k++;
	}

	return (-1);
}
