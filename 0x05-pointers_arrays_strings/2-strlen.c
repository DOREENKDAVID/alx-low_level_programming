#include "main.h"

/**
 * _strlen -  function that returns the length of a string.
 * @s: sring
 * Return length
 */

int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}
	return (c);
}
