#include <stddef.h>
/**
 * _strchr - this method finds the first occurance of a char
 * @s: this is the pointer of the char
 * @c: this is the char we are looking for in the string
 * Return: this method returns the pointer when the char first occured
 */
char *_strchr(char *s, char c)
{
	while (*s)
{
	if (*s == c)
	return (s);
	s++;
}
	if (c == '\0')
	return (s);

	return (NULL);
}
