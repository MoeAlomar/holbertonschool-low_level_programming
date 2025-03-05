#include "main.h"
/**
 * print_chessboard - this method prints the chess board of a fixed size
 * @a: is the 2d array sized chessboard
 * Return: this method returns void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
{
	for (j = 0; j < 8; j++)
{
	_putchar(a[i][j]);
}
}
}
