/**
 * _strpbrk - this method stops at the first occurance of a given char in a str
 * @s: this is the given string
 * @accept: this is the given string we are gonna check it's char occurance
 * Return: this method returns the pointer if we ever find the char
 */
char *_strpbrk(char *s, char *accept)
{
	char *tmp = s;

	while (*tmp != '\0')
{
	while (*accept != '\0')
{
	if (*tmp == *accept)
	return (tmp);
	accept++;
}
	tmp++;
}
	return (null);
}
