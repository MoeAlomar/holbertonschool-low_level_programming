#include <stddef.h>
#include "function_pointers.h"
/**
 * print_name - function that prints a name using a function pointer
 * @name: name to be printed
 * @f: function pointer that defines how to print the name
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
