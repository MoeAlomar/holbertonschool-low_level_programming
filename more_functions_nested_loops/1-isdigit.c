#include "main.h"
/**
 * _isdigit - this method returns 1 if c is a digit and 0 if not
 * @c: this is the entered digit
 * Return: it returns 0 if c isnt a digit or 1 if it's a digit
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
{
	return (1);
}
	return (0);
}
