#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count;

	for (count = 48; count <= 57; count++)
{
	putchar(count);
	if (count != 57)
{
	putchar(',');
	putchar(' ');
}
}
	putchar('\n');
	return (0);
}
