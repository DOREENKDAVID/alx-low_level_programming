#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0.
 * Description: function that prints the 9 times table, starting with 0.
 * Return: multiples
 */

void times_table(void)
{
	int i, j, n, x, y;

	for (i = 0; i < 10; ++i)
	{
		for (j = 0; j < 10; ++j)
		{
			n = i * j;

			if (j == 0)
			{
				_putchar('0');
			}
			else if (n > 9)
			{
				x = n / 10 + '0';
				y = n % 10 + '0';
				_putchar(x);
				_putchar(y);
			}
			else
			{
				_putchar(' ');
				_putchar(n + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
