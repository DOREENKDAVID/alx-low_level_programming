#include <stdio.h>

/**
 * main - prints the alphabet in lowercase excepr e and q.
 *
 * Return: Always (Success)
 */
int main(void)
{
char d;

for (d = 'a'; d <= 'z'; d++)

/* print all except e and q*/
{
if (d != 'e' && d != 'q')
{
putchar(d);
}
}
putchar('\n');

return (0);
}
