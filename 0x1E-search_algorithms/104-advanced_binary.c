#include "search_algos.h"

/**
  * advanced_binary_recursive -It searches recursively for a value in a sorted
  * array of integers using binary search.
  * @array: pointer to the first element of the [sub]array to search.
  * @left: starting index of the [sub]array to search.
  * @right: ending index of the [sub]array to search.
  * @value: The value to search for.
  *
  * Return: If the value is not present, -1.
  * Otherwise, the index where the value is located.
  *
  * Description: Prints the [sub]array being searched after each change.
  */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t k;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (k = left; k < right; k++)
		printf("%d, ", array[k]);
	printf("%d\n", array[k]);

	k = left + (right - left) / 2;
	if (array[k] == value && (k == left || array[k - 1] != value))
		return (k);
	if (array[k] >= value)
		return (advanced_binary_recursive(array, left, k, value));
	return (advanced_binary_recursive(array, k + 1, right, value));
}

/**
  * advanced_binary - It Searches for a value in a sorted array
  * of integers using advanced binary search.
  * @array: pointer to the first element of the array to search.
  * @size: number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  * Otherwise, the first index where the value is located.
  *
  * Description: Prints the [sub]array being searched after each change.
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
