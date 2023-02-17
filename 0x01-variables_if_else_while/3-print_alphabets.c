#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always (Success)
 */
int main(void)
{
char d;

for (d = 'a'; d <= 'z'; d++)
{
putchar(d);
}

for (d = 'A'; d <= 'Z'; d++)
{
putchar(d);
}

putchar('\n');

return (0);
}
