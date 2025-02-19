#include <stdio.h>
/**
 * print_natural - this method prints all natural numbers that are
 * Return: this method of type void so it returns nothing.
 */
void print_natural(void)
{
	int num = 1024;

	int i = 0;
	int sum = 0;

	for (i = 1; i < num; i++)
{
	if (i % 3 == 0 || i % 5 == 0)
{
	sum += i;
}
}
	printf("%d\n", sum);
}
/**
 * main - this is the start point of the program.
 * Return: this returns nothing.
 */
int main(void)
{
	print_natural();
	return (0);
}
