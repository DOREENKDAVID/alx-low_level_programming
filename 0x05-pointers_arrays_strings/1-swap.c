#include "main.h"

/**
 * swap_int(int *a, int *b) - function that swipes the values of two intrgers
 * @a: int to swap
 * @b: int to swap
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{

	int c;

	c = *a;
	*a = *b;
	*b = c;
}
