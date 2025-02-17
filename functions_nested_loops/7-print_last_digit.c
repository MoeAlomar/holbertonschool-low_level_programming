#include "main.h"
/**
 *print_last_digit - this method prints the last digit of a num
 *@n: is the integer provided from the user
 *
 *Return: it returns the last digit immediately.
 */
int print_last_digit(int n)
{
	int last_digit;

	unsigned int num;

	if (n < 0)
	num = -((unsigned int)n);
	else
	num = n;
	last_digit = (n % 10);
	_putchar(last_digit + '0');
	return (last_digit);
}
