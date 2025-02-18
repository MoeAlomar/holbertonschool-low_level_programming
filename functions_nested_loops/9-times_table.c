#include "main.h"
/**
 * times_table - this method shows the times table from 0-9
 *Return: this method returns nothing.
 */
#include "main.h"

void times_table(void)
{
	int i;

	int j;

	int product;

	for (i = 0; i <= 9; i++)
{
	for (j = 0; j <= 9; j++)
{
	product = i * j;

	if (product < 10 && j != 0)
	_putchar(' ');

	if (product >= 10)
	_putchar((product / 10) + '0');
	_putchar((product % 10) + '0');

	if (j < 9)
{
	_putchar(',');
	_putchar(' ');
}
}
	_putchar('\n');
}
}
