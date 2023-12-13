#include "search_algos.h"
/**
 * recursive_search - Finds a value in an array of integers
 * using the Binary search algorithm
 *
 * @array: A pointer to the first element of the array to search.
 * @size: The size of the number of elements in an array
 * @value: The value to search for.
 *
 * Return: The index where the value is locate
 */
int recursive_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t k;

	if (array == NULL || size == 0)
		return (-1);
	printf("Searching in array");
	for (k = 0; k < size; k++)
		printf("%s %d", (k == 0) ? ":" : ",", array[k]);
	printf("\n");
	if (half && size % 2 == 0)
		half--;
	if (value == array[half])
		return ((int)half);
	if (value < array[half])
		return (recursive_search(array, half, value));
	half++;
	return (recursive_search(array + half, size - half, value) + half);
}
/**
 * binary_search - It calls to binary_search to return
 * the index of the number
 *
 * @array: The input array
 * @size: The array size
 * @value: The value to search in the array
 *
 * Return: The index where the value is locate
 */
int binary_search(int *array, size_t size, int value)
{
	int index;

	index = recursive_search(array, size, value);
	if (index >= 0 && array[index] != value)
		return (-1);
	return (index);
}
