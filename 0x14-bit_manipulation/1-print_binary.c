#include "main.h"
#include <stdio.h>

/**
 * print_binary - a fun tha prints binary rep of a number.
 * @n: the int to be printed
 * return: 0
 */

void print_binary(unsigned long int n)
{
	int j, count = 0;
	unsigned long int num;

	for (int j  = 63; j >= 0; j--)
	{
		num = n >> j;

		if (num & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
