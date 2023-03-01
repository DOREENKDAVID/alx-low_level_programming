#include "main.h"

/**
 * _strncat - concatinates n characters from string 2 to string 1
 * @dest: pointer to string 1
 * @src: pinter to string 2
 * @n: the num of bytes from src 1 to be appended to dest
 *
 * return : a pointer to te restulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b;

	while (dest[a] != '\0')
	{
	a++;
	}

	for (a = 0; src[a] && a < n; a++)
	{

		dest[b++] src[b];
	

	return (dest);
}
