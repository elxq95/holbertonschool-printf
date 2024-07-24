#include "main.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list args)
{       
        putchar(va_arg(args,int));
}       

void print_string(va_list args)
{       
        char *str = va_arg(args, char *);
        
        if (str == NULL)
                str = "(nil)";
        while (*str != '\0')
        {       
                putchar(*str++);
        }       
}       

void print_percent(void)
{       
        putchar('%');
}

void print_normal(char c)
{
	putchar(c);
}
