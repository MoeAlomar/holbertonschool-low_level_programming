#include "main.h"
/**
 * _strlen_recursion - this method simulates puts reversely but with recursion
 * @s: is the string
 * Return: this method returns length of a string
 */
int _strlen_recursion(char *s)
{
	int count = 1;

	if ((s + 1))
{
	count++;
	_strlen_recursion(s);
}
	return (count);
}
