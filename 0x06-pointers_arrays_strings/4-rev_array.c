#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of intergers.
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: no
 *
 */

void reverse_array(int *a, int n)
{
	int i, j, tmp;

	i = 0;
	j = n - 1;

	while(i < j)
	{

	tmp = a[i];
	a[i] = a[j];
	a[j] = tmp;
	i++;
	j--;
}
}

