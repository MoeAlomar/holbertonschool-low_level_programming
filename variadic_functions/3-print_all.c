#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - Prints anything on the format provided
 * @format: list of types of arguments passed to the function
 *
 * Description: prints characters integers, floats,
 * and strings. If a string is NULL, it prints (nil).
 * Any character in the format string is ignored.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	char *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c' || format[i] == 'i'
		|| format[i] == 'f' || format[i] == 's')
		{
			printf("%s", separator);
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(args, int));
					break;
				case 'i':
					printf("%d", va_arg(args, int));
					break;
				case 'f':
					printf("%f", va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (!str)
						str = "(nil)";
					printf("%s", str);
					break;
			}
			separator = ", ";
		}
		i++;
	}

	printf("\n");
	va_end(args);
}
