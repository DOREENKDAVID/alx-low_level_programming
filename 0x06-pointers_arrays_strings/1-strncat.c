#include "main.h"

/**
 * *_strncat - concatinates n characters from string 2 to string 1
 * @dest: pointer to string 1
 * @src: pinter to string 2
 * @n: the num of bytes from src 1 to be appended to dest
 *
 * Return: a pointer to te restulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int m;
	int i;

	m = 0;

	for (i = 0; i < 1000; i++)
	{
		if (dest[i] == '\0')
		{
			break;
		}
		m++;
	}

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[m + i] = src[i];
	}
	dest[m + i] = '\0';
	return (dest);
}
