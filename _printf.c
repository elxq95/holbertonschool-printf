#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - Custom printf function
 * @format: Format string
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i;
	int size;
	int flagged;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	size = 0;
	flagged = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (flagged == 0)
		{
			if (format[i] == '%')
			{
				flagged = 1;
			}
			else
			{
				print_normal(format[i], &size);
			}
		}
		else
		{
			pick_operation(format[i], args, &size);
			flagged = 0;
		}
	}

	va_end(args);
	return (size);
}
