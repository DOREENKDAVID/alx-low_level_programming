#include "main.h"

/**
 * main - program that prints _putchar, followed by a new line.
 * Description uses the main header fil
 * that contains the dunction_putchar
 * Return: 0.
 */

int main(void)
{
char str[] = "_putchar";
	int i;

	i = 0;
	while (str[i])
	{
	_putchar(str[i]);
	++i;
	}
	_putchar('\n');

	return (0);
}
