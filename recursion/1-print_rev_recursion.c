#include "main.h"
/**
 * _print_rev_recursion - this method simulates puts reversely
 * but with recursion
 * @s: is the string
 * Return: this method returns void
 */
void _print_rev_recursion(char *s)
{
	if (!s)
	return;
	if (s)
	_print_rev_recursion(s + 1);

	_putchar(*s);

}
