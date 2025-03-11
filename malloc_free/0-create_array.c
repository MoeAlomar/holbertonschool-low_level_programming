#include "main.h"
#include <stdlib.h>
/**
 * create_array - this function creates arrayof char with the given size
 * @size: this is the given size of the array
 * @c: this is the char that should be initialized with the array
 * Return: this method return the pointer at the start of malloc or null
 */
char *create_array(unsigned int size, char c)
{
	char *t;

	if (size == 0)
	return (NULL);
	t = malloc(sizeof(char) * size);
	if (t == NULL)
	return (NULL);
	t[0] = c;
	return (t);
}
