#include "main.h"
/**
 * print_sign - this method prints - if n < 0 or 0 if n == 0
 * or + if n > 0
 * @n: is the integer value provided from the caller.
 *
 * Return: it return 1 if n > 0 or 0
 * if n == 0 or -1 if n < 0
 */
int print_sign(int n)
{
	if (n > 0)
{
	_putchar('+');
	return (1);
}
	if (n == 0)
{
	_putchar('0');
	return (0);
}
	_putchar('-');
	return (-1);
}
