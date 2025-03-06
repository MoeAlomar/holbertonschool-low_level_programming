#include "main.h"
/**
 * _strlen_recursion - this method counts string length
 * @s: is the string
 * Return: this method returns length of a string
 */
int _strlen_recursion(char *s)
{
	int count = 1;

	if (*(s + 1) != '\0')
{
	count += _strlen_recursion(s + 1);
}
	return (count);
}
