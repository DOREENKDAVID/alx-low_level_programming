#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: is the string to be printed between numbers
 * @n: number of numbers passed to the function to print
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list valist;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(valist, int);
		printf("%d", num);

	if (i < n - 1 && separator)
		printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
