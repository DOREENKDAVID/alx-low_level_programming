#include "main.h"
#include <stdio.h>

/**
 * print_binary - a fun tha prints binary rep of a number.
 * @n: the int to be printed
 * return: 0
 */

void print_binary(unsigned long int n)
{
	for (int i = 31; i >= 0; i--)
	{
		putchar((n & (1 << i)) ? '1' : '0');
	}
	_putchar('\n');
}
