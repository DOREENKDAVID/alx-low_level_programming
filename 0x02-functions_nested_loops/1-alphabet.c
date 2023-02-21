#include "main.h"

/**
 * main - prints the alphabet, in lowercase, followed by a new line.
 * Description: uses the main header file
 * that contains the _putchar function
 * Return: void.
 */
void print_alphabet(void)
{
char ch;

ch = 'a';

while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');

}


