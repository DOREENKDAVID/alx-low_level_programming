#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase.
 * Description: uses the main header file
 * that contains the _putchar function
 * Return: void.
 */
void print_alphabet(void)
{
int i = 0;

while (i < 11)
{

char ch;

ch = 'a';

while (ch <= 'z')
{
_putchar(ch);
ch++;
}
}
_putchar('\n');
i++;
}
