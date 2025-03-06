#include "main.h"
/**
 * factorial - this method gives you the factorial of any n
 * @n: is the number
 * Return: this method returns factorial of an n
 */
int factorial(int n)
{
	if (n < 0)
	return (-1);

	if (n == 1)
	return (1);

	if ( n == 0)
	return (0);

	return (n * factorial(n - 1))
}
