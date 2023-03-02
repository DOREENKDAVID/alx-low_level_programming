#include "main.h"

/**
 * _strcat -  concatinates two strings
 * @dest: pointer to string 1
 * @src: pointer to string 2
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
	a++;
	}

	while  (src[b] != '\0')
	{

	dest[a] = src[b];
	a++;
	b++;
	}

	dest[a] = '\0';

	return (dest);

}
