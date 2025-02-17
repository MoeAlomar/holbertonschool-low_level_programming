#include "main.h"
/**
 * _isalpha - this method checks if c is an alphabet or not
 * doesn't matter if its lower or upper case.
 * @c: is the char provided as a number from ASCII table
 *
 * Return: this method return 1 if it's an alphabet or 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	return (1);
	else
	return (0);
}
