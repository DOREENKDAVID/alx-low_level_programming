#include <stdio.h>

/**
 * main - prints the alphabet in lowercase in reverse
 *
 * Return: Always (Success)
 */
int main(void)
{
char d;

for (d = 'z'; d >= 'a'; d--)

{
putchar(d);
}

putchar('\n');

return (0);
}
