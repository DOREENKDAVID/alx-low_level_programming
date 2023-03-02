#include "main.h"

/**
 * _strncpy - copy n characters from string2 to string 1
 * @dest: strng 1
 * @src: string 2
 * @n: the num of characters to be copied to string
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; src[a] != '\0' && a < n; a++)
	{
		dest[a] = src[a];
	}

	for ( ; a < n; a++)
	{
		dest[a] = '\0';
	}
	return (dest);
}
