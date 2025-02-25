#include "main.h
/**
 * most_numbers - this method prints the numbers (0-14) 10 times followed by a new line
 * Return: this method returns void.
 */
void more_numbers(void)
{
	int i, j, a;

	for (i = 0; i < 10; i++)
{
	for (j = 0; j <= 14; j++)
{
	if (j < 10)
	_putchar(j);
	if (j >= 10)
	a = j/10;
	_putchar(a, j % 10);
}
	_putchar('\n');
}
}
