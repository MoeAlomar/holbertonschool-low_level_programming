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
	unsigned int prefix_len = 0;
	int i, j, found;

	for (i = 0; s[i] != '\0'; i++)
{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
{
			if (s[i] == accept[j])
{
				found = 1;
				break;
}
}
		if (!found)
		break;
	prefix_len++;
}
	return (prefix_len);
}
