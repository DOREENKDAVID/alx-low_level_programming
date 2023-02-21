#include "main.h"

/**
 *_islower - function that checks for lowercase character.
 * 
 * @c: c is an int and will be checked if lower case letter
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
