#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - this method copies string to malloc string
 * @str: is the String
 * Return: this method returns pointer of malloc string
 */
char *_strdup(const char *str)
{

	if (str == NULL)
	return (NULL);
	size_t len = strlen(str) + 1;
	char *p = malloc(len);

	if (p == NULL)
	return (NULL);

	char *copy = p;

	while ((*copy++ = *str++));

	return p;
}
