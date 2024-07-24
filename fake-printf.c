#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>


void pick_operation(char flag, va_list args)
{
	switch (flag)
	{
	case ('c'):
		print_char(args);
		break;
	case ('s'):
		print_string(args);
			break;;
	case ('%'):
		print_percent();
		break;
	default:
		print_normal(flag);
		break;
	}
}

/**
 * _printf - printf
 * @format: format
 * Return: length of string result
 */
int _printf(const char *format, ...)
{
	va_list vargs;
	int i = 0, size = 0;
	int flagged = 0;
	char *result;

	if (format == NULL)
		return (-1);

	va_start(vargs, format);

	while (format[i] != '\0')
	{
		if (flagged)
		{
			pick_operation(format[i], vargs);
			flagged = 0; //Reset the flag
		}
		else
		{
			if (format[i] == '%')
			{
				flagged = 1;
			}
			else
			{
				print_normal(format[i]);
			}
		}
		i++;
	}

	va_end(vargs);
	return (0);
}
