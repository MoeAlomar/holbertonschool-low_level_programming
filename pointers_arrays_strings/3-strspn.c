/**
 * _strspn - this method counts the number of a char
 * repeated from string to another
 * @s: is the string we want to compare prefix in
 * @accept: this is the string that we will be
 * comparing to the first string
 * Return: we return the length of the prefix
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int prefixLngth;
	char *tmp = s;

	while (*accept != '\0')
{
	s = tmp;
	while (*s != '\0')
{
	if (*accept == *s)
	prefixLngth++;
	s++;
}
	accept++;
}
	return (prefixLngth);
}
