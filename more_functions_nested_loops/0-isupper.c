#include "main.h"
/**
 * _isupper - this functios return 1 if a char is upper or 0 if lower
 * @c: this is the parameter that recieves an integer as an ASCII Code
 *Return this method return 1 or 0 if upper or lower 
 */
int _isupper(int c)
{
  if (c >= 65 && c <= 90)
{
	_putchar(c + '0');
	_putchar(": ");
	_putchar('1');
	return (1);
}
	else
{
	_putchar(c + '0');
	_putchar(": ");
	_putchar('1');
	return (0);
}
}
