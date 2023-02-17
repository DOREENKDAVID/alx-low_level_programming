#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: Always (Success)
 */
int main(void)
{
int  n, m, o;

for (n = '0'; n <= '9'; n++)
{
for (m = '0'; m <= '9'; m++)
{
for (o = '0'; o <= '9'; o++)
{
if (n < m && m < o)
{
putchar(n);
putchar(m);
putchar(o);

if (n != '7')
{
putchar(',');
putchar(' ');
}
}
}
}
}

putchar('\n');

return (0);
}
