#include "main.h"
/**
 * print_to_98 - this method print all the real number statring from n to 98
 * @n : is the number we're starting with
 * Return: this method is void and returns nothing
 */
void print_to_98(int n)
{
	const int MAX = 98;

	int i;

	for (i = n; i <= MAX; i++)
{
	if (i < 10)
{
	_putchar(i + '0');
}
	else
{
	_putchar((i / 10) + '0');
	_putchar((i % 10) + '0');
}
	_putchar(',');
	_putchar(' ');
}
}
