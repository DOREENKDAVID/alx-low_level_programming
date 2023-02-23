#include "main.h"

/**
 * void print_line(int n) - a function that draws a straight line in the terminal.
 *@n -ine to be checked
 * Return: Always 0.
 */

void print_line(int n)
{
	int c;

	for (c = 0; c < n; ++c)
		_putchar('_');
	_putchar('\n');
}
