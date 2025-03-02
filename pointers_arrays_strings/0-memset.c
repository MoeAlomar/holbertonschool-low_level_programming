/**
 * _memset - this functions fills the first n Bytes pointed by
 * a pointer with char b
 * @s: this is the pointer s
 * @b: this is the char b to be filled in the pointer spaces
 * @n: this is the number of bytes that has to be filled with b
 * Return: this method return the pointer itself
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *d = s;

	for (i = 0; i < n; i++)
{
	*d = b;
	d++;
}
	return (s);
}
