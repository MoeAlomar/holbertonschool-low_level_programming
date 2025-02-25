#include "main.h"
/**
 * print_line - this method prints - n times followed by a new line
 * @n: tjis is the number of time "-" is printed
 * Return: this method returns void.
 */
void print_line(int n)
{
	int i;

	if ( n <= 0)
{
	_putchar('\n');
	return;
}
	for (i = 0; i < n; i++)
{
	_putchar('_');
}
	_putchar('\n');
}
