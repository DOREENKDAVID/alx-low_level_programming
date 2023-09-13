#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - searches for a value in an array of integers
 * using the jump search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: valuue or -1
*/
int jump_search(int *array, size_t size, int value)
{
	size_t i;
	size_t left = 0;
	size_t right = sqrt(size);
	int valuefound = 0;

	if (array == NULL)
		return (-1);
	printf("Value checked array[%lu] = [%d]\n", left, array[left]);
	while (right < size && array[right] < value)
	{

		left = right;
		right = right + sqrt(size);
		/*determine right boundary*/
		if (right >= size)
			right = size - 1;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", left, right);
	/* linear search  the new subarray*/
	for (i = left; i <= right; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			valuefound = 1;
			return (i);
		}
	}
	if (valuefound)
	{
		printf("Value found between indexes [%lu] and [%lu]\n", left, right);
		return (1);

	}
	else
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		return (-1);
	}
}
