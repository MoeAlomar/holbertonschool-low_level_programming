#include <stdio.h>
/**
 * main - this method is the start point of the program.
 * print_natural - this method prints all natural numbers that are 
 * multiplies of 3 or 5 and prints their sums until 1024 excluded.
 * Return: this method of type void so it returns nothing.
 */
int main(void)
{

void print_natural(void)
{
	int num = 1024;

	int i,sum;

 for (i = 1; i < num; i++)
{
  if (i % 3 == 0 || i % 5 == 0)
{
	sum += i;
}
}
	printf("%d", sum);
}
}
