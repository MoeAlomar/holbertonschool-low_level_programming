#include "main.h"
/**
 * print_times_table - this method shows the times table from 0-n
 * @n: this parameter decides how many tables it should print
 *Return: this method returns nothing.
 */
#include "main.h"

void print_times_table(int n)
{
	int i;

	int j;

	int product;

	if (n < 0 || n > 15)
	return;
	for (i = n; i <= n; i++)
{
	for (j = n; j <= n; j++)
{
	product = i * j;

	if (product < 10 && j != 0)
	_putchar(' ');

	if (product >= 10)
	_putchar((product / 10) + '0');
	_putchar((product % 10) + '0');

	if (j < n)
{
	_putchar(',');
	_putchar(' ');
}
}
	_putchar('\n');
}
}
