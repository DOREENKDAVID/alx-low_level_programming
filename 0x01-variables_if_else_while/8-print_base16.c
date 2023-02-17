#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: Always (Success)
 */
int main(void)
{
char d;

for (d = '0'; d <= '9'; d++)
{
putchar(d);
}

for (d = 'a'; d <= 'f'; d++)
{
putchar(d);
}

putchar('\n');

return (0);
}
