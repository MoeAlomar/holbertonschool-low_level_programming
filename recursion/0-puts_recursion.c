#include "main.h"
/**
 * _puts_recursion - this method simulates puts but with recursion
 * @s: this is the string pointer we will print
 * Return: this method returns void
 */
void _puts_recursion(char *s)
{
	if (*s)
{
	_putchar(*s);
	_puts_recursion(s + 1);
}
	else
	_putchar('\n');
}
