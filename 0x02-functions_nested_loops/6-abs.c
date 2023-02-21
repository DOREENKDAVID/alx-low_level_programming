#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer.
 * Description: func computes the absolute vaule  iee - or +
 * @n: is the num witch the abs v will be checked
 * Return: n if + or n*-1 if negative
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
