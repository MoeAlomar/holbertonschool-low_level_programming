#include "main.h"
/**
 * print_digonal - this method print a diagonal of n (\)
 * @n: this is the number of lines of the diagonal
 * Return: this method returns void.
 */
void print_diagonal(int n)
{
  int i,j;

	if (n <= 0)
{
	_putchar('\n');
	return;
}
	for (i = 0; i < n; i++)
{
	for (j = 0; j < i; j++)
	_putchar(' ');

	_putchar('\\');
	_putchar('\n');
}
}
