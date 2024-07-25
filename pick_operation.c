#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * pick_operation - selects print function based on format specifier
 * @flag: the format specifier
 * @args: list of arguments
 * @size: pointer to the size counter
 */
void pick_operation(char flag, va_list args, int *size)
{
	switch (flag)
	{
		case 'c':
			print_char(args, size);
			break;
		case 's':
			print_string(args, size);
			break;
		case '%':
			print_percent(size);
			break;
		default:
			print_normal('%', size);
			print_normal(flag, size);
			break;
	}
}
