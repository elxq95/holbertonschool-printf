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
	int i, size = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			i++;
			pick_operation(format[i], args, &size);
		}
		else
		{
			print_normal(format[i], &size);
		}
	}

	va_end(args);
	return (size);
}
