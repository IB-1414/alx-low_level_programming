#include "main.h"

/**
 * times_table - prints the n times table starting with zero
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int x, y, product;
        int num;

	for (x = 0; x <= num; x++)
	{
		for (y = 0; y <= num; y++)
		{
			product = x * y;
			if (y != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (y == 0)
			{
				_putchar('0');
			}
			else if (product >= num + 1)
			{
				_putchar((product / num + 1) + '0');
				_putchar((product % num + 1) + '0');
			}
			else if ((product < num + 1) && (y != 0))
			{
				_putchar(' ');
				_putchar((product % num + 1) + '0');
			}
		}
		_putchar('\n');
	}
}
