#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers
 * using the binary search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: valuue or -1
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t left = 0;
	size_t right = size - 1;
	int mid;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		mid = (left + right) / 2;

		printf("Searching in array: ");

		for  (i = left; i <= right; i++)
		{
			if (i != right)
			{
				printf("%d, ", array[i]);
			}
			else
			{
				 printf("%d\n", array[i]);
			}
		}
		if (value == array[mid])
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			if (array[mid] > value)
				right = mid - 1;
	}
	return (-1);
}

/**
 * exponential_search - searches for a value in an array of integers
 * using the exponential search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: valuue or -1
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t left  = 0;
	size_t i = 1;
	int found;
	if (array == NULL || size == 0)
		return (-1);
	if (array[0] == value)
		return (0);
	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);
		left = i;
		i = i * 2;
	}
	printf("Value checked array[%lu] = [%d]\n", left, array[left]);
	if (i >= size)
		i = size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", left, i);
	found = (binary_search(array + left, i - left + 1, value));
	if (found == -1)
		return (-1);
	else
		return (int)(left +found);
}
