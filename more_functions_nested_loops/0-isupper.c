#include "main.h"
/**
 * _isupper - this functios return 1 if a char is upper or 0 if lower
 * @c: this is the parameter that recieves an integer as an ASCII Code
 *Return: this method return 1 or 0 if upper or lower
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
{
	return (1);
}
	return (0);
}
