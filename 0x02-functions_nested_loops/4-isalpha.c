#include "main.h"

/**
 * _isalpha -function that checks for alphabetic character.
 *@c: is the int to be checked for alphabetic character
 * Description: Returns 1 if c is a letter, lowercase or uppercase
 * Return: 0 if otherwise
 */

int _isalpha(int c)

{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
