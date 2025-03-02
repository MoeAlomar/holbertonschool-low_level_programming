/**
 * _memcpy - this method copies from a pointer space n bytes to another
 * @dest: this is the destination where we want to cpy the pointer
 * @src: this is the src pointer where we want to cpy from
 * @n: this is the number of bytes we want to cpy
 * Return: this method returns the first memory byte where we pasted
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *temp = dest;

	for (i = 0; i < n; i++)
{
	*temp = *src;
	temp++;
	src++;

}
	return (dest);
}
