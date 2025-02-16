#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char count;

	for (count = '0'; count <= '9'; count++)
{
	putchar(count + ',' + ' ');
}
	return (0);
}
