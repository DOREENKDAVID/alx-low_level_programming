#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * recursive_binary - searches for a value in an array of integers
 * using the binary search
 * @array: pointer to the first element of the array to search in
 * @left: start point
 * @right: end point size -1
 * @value: value to search for
 * Return: valuue or -1
*/
int recursive_binary(int *array, size_t left, size_t right, int value)
{
	size_t i;
	int mid;

	if (array == NULL)
		return (-1);

	printf("Searching in array: ");

	for  (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d, ", array[i]);
	printf("\n");

	mid = (left + right) / 2;
	if (array[mid] == value && array[mid - 1] != value)
		return (mid);
	else if (right == left)
		return (-1);
	else if (array[mid] < value)
		return (recursive_binary(array, mid + 1, right, value));
	else if (array[mid] >= value)
		return (recursive_binary(array, left, mid, value));

	return (-1);
}

/**
 * advanced_binary - searches for a value in a sorted array of integers using
 * recursion
 * using the Binary search algorithm
 * @array: sorted array to search
 * @size: size of the array
 * @value: value to find in array
 * Return: position of value on success, -1 on failure
*/
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);
	return (recursive_binary(array, 0, size - 1, value));
}
