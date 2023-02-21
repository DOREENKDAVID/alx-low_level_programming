#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @n: the int whose last digit is checked
 * Description: function that prints the last digit of a number
 * and value returned
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int l;

	l = n % 10;

	if (l < 0)
	
		l *= -1;
		_putchar('0' + l);
		return (l);
	
}	
