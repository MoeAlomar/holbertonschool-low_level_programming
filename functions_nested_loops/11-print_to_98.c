#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - this method print all the real number statring from n to 98
 * @n : is the number we're starting with
 * Return: this method is void and returns nothing
 */
#include "main.h"
#include <stdio.h>
void print_to_98(int n)
{
	const int MAX = 98;

	int i;

	if (n == 98)
	printf("%d\n", MAX);
	if (n > 98)
{
	for (i = n; i > MAX; i--)
{
	printf("%d, ", i);
}
	printf("%d\n", MAX);
}
	else if (n < 98)
{
	for (i = n; i < MAX; i++)
{
	printf("%d, ", i);
}
	printf("%d\n", MAX);
}

}
