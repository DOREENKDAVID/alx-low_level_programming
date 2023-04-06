#include "main.h"

/**
 * get_bit - a func that returns the value of a bit at a given index.
 * @index: is the index, starting from 0 of the bit you want to get
 * @n: number to check the bits in.
 * Return: the value of the bit at index index or -1 if an error occured
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	return (-1);
	divisor = 1 << index;
	check = n & divisor;
	if (check == divisor)
	return (1);
	return (0);
}
