#include "main.h"

/**
 * main -  function that prints the sign of a number
 * @n: is an int that is checked for its sign
 * Description: Returns 1 and prints + if n is greater than zero
 * Returns 0 and prints 0 if n is zero
 * Return: -1 and prints - if n is less than zero
 */

int print_sign(int n);
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{

		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
