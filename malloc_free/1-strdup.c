#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - this method copies string to malloc string
 * @str: is the String
 * Return: this method returns pointer of malloc string
 */
char *_strdup(char *str)
{
	int i;

	char *p

	size_t len;

	len = strlen(str) + 1;

	p = malloc(len)
	if (*str == NULL)
	return (NULL);

	for (str; *str != '\0'; str++)
{
	*p = *str;
	p++;
}
	*p = '\0';
	return (p);
}
