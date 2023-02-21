#include "main.h"

/**
 * main - function that checks for lowercase character.
 * desctiption: in main file
 * @c: c is an int and will be checked if lower
 * Description: it returns 1 if c is lowercase and returns 0 if otherwise
 * Return: 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}



