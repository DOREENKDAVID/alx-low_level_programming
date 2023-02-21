#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet, in lowercase.
 * Description: uses the main header file
 * that contains the _putchar function
 * Return: void.
 */
void print_alphabet_x10(void)
{
char ch;
int num;

for (num = 0; num < 10; ++num)
{
	for (ch = 'a'; ch <= 'z'; ++ch)
	{
		_putchar(ch);
	}

_putchar('\n');
}
}
