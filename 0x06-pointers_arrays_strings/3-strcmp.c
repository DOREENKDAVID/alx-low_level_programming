#include "main.h"

/**
 * _strcmp - string compare all characters
 * @s1: string whose characters will be compared
 * @s2: string 2
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && s1 ==*s2)
	{
		s1++;
		s2++;
	}
	return (*si - *s2);
}
