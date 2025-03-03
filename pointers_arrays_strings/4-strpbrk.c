#include <stdio.h>
/**
 * _strpbrk - this method stops at the first occurance of a given char in a str
 * @s: this is the given string
 * @accept: this is the given string we are gonna check it's char occurance
 * Return: this method returns the pointer if we ever find the char
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
{
		for (i = 0; accept[i] != '\0'; i++)
{
			if (*s == accept[i])
{
				return (s);
}
}
		s++;
}
	return (NULL);
}
