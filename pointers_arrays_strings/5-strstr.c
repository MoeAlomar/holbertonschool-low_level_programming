#include <stddef.h>
/**
 * _strstr - this method returns the pointer where the
 * first occurance of a substring is found
 * @haystack: this is the main string
 * @needle: this is the substring
 * Return: the method returns the pointer where the
 * start of the substring found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h;
	char *n;

	while (*haystack)
{
	h = haystack;
	n = needle;

	while (*n && *h && *h == *n)
{
	n++;
	h++;
}

	if (*n == '\0')
	return (haystack);

	haystack++;
}

	return (NULL);
}
