#include "main.h"
/**
 * print_times_table - this method shows the times table from 0-n
 * @n: this parameter decides how many tables it should print
 *Return: this method returns nothing.
 */
void print_times_table(int n)
{
	int i, j, product;

	if (n < 0 || n > 15)
	return;
	for (i = 0; i <= n; i++)
{
	for (j = 0; j <= n; j++)
{
	product = i * j;

	if (j != 0)
{
	_putchar(',');
	_putchar(' ');
	if (product < 10)
{
	_putchar(' ');
	_putchar(' ');
}
	else if (product < 100)
{
	_putchar(' ');
}
}
	if (product < 10)
	_putchar(product + '0');
	else if (product < 100)
{
	_putchar((product / 10) + '0');
	_putchar((product % 10) + '0');
}
	else
{
	_putchar((product / 100) + '0');
	_putchar(((product / 10) % 10) + '0');
	_putchar((product % 10) + '0');
}
}
	_putchar('\n');
}
}
