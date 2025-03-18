#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
void print_all(const char * const format, ...)
{
    int num_args = strlen(format);
    int i;
    va_list args;

    va_start(args,num_args);
    for (i = 0; i < num_args; i++)
    {
        if(format[i] == 'c')
    {
        printf("%c", va_args(args, char));      if (i < num_args - 1) printf(", ");
    }    
        else if (format[i] == 'i')
    {
     printf("%d", va_args(args, int));
     if (i < num_args - 1) printf(", ");
    }
    
    else if (format[i] == 'f')
{
     printf("%f",  va_args(args, float));
     if (i < num_args - 1) printf(", ");

}
    else if (format[i] == 's')
        {
        printf("%s", va_arg(args, char*)); 
        
        if (i < num_args - 1)
        printf(", ");
}
    }
    va_end(args);
}