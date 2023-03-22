#include "function_pointers.h"

/**
 * array_iterator - executes a func given as a param on each element of array
 * @array: array to execute function on
 * @size: size of array
 * @action: pointer to the function to be used
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t j;

	if (array && action)
	{
		for (j = 0; j< size; j++)
		{
			action(array[j]);
		}
	}
}
