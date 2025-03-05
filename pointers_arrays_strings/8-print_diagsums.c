#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - this method print the sum of the primary & secondary diag
 * @a: this is a 2D array pointer
 * @size: size of the array
 * Return: this method returns void
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int primDiagSum, scndDiagSum;

	for (i = 0; i < size; i++)
{
	primDiagSum = a[i][i];
}
	for (i = 0; i < size; i++)
{
	scndDiagSum = a[i][size - i - 1];
}
	printf("%d, %d", primDiagSum, scndDiagSum);
}
