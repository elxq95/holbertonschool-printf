#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - produces output according to a format
 * @format: format string
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
    va_list vargs;
    int i = 0, size = 0;
    int flagged = 0;

    if (format == NULL)
        return (-1);

    va_start(vargs, format);

    while (format[i] != '\0')
    {
        if (flagged)
        {
            pick_operation(format[i], vargs, &size);
            flagged = 0; /* Reset the flag */
        }
        else
        {
            if (format[i] == '%')
            {
                if (format[i + 1] == '\0')
		{
			va_end(vargs);
			return(-1);
		}
		flagged = 1;
            }
            else
            {
                print_normal(format[i], &size);
            }
        }
        i++;
    }

    va_end(vargs);
    return size;
}
