#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - This method prints alphabets in small letter from a-z
 *
 * @void this method returns nothing.
 */
void print_alphabet(void)
{	char i;

	for (i = 'a'; i <= 'z'; i++)
{
	_putchar(i);
}
	_putchar('\n');
}
