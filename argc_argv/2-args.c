#include <stdio.h>
#include "main.h"
/**
 * main - this functios is thre starting point
 * @args: is the number of argumens
 * @argv: this is an array of arguments
 * Return: always returns 0
 */
int main(int args, char *argv[])
{
	int i;

	for (i = 0; i < args; i++)
{
	printf("%s", argv[i]);
}
	return (0);
}
