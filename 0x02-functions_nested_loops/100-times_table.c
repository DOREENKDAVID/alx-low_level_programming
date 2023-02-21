#include "main.h"

/**
 * void print_times_table - function that prints the n times table, 
 * starting with 0
 * @n: the int to be checked
 * Return: nothing
 */

void print_times_table(int n)
{
	int x, y, z;

if (num > 99)
{
x = num / 100 + '0';
y = num / 10 % 10  + '0';
z = num % 10 + '0';
_putchar(' ');
_putchar(x);
_putchar(y);
_putchar(z);
}
else if (num > 9)
{
x = num / 10 + '0';
y = num % 10 + '0';
_putchar(' ');
_putchar(' ');
_putchar(x);
_putchar(y);
}
else
{
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(num + '0');
}
}
/**
 * print_times_table - print the times table depending on input
 * @n: input that will dicate size of times table.
 *
 * print_nums
 * Return: void, print out to console.
 */
void print_times_table(int n)
{
int i, j, num;

if (n >= 0 && n < 16)
{
for (i = 0; i <= n; ++i)
{
for (j = 0; j <= n; ++j)
{
num = i * j;
if (j == 0)
_putchar('0');
else
print_nums(num);

if (j < n)
_putchar(',');
else
_putchar('\n');
}
}
}
}
