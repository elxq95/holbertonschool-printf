#include "main.h"
#include <stdio.h>

/**
 * print_char - prints a character
 * @args: list of arguments
 * @size: pointer to the size counter
 */
void print_char(va_list args, int *size)
{
	putchar(va_arg(args, int));
	(*size)++;
}

/**
 * print_string - prints a string
 * @args: list of arguments
 * @size: pointer to the size counter
 */
void print_string(va_list args, int *size)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";
	while (*str != '\0')
	{
		putchar(*str);
		str++;
		(*size)++;
	}
}

/**
 * print_percent - prints a percent sign
 * @size: pointer to the size counter
 */
void print_percent(int *size)
{
	putchar('%');
	(*size)++;
}

/**
 * print_normal - prints a normal character
 * @c: the character to print
 * @size: pointer to the size counter
 */
void print_normal(char c, int *size)
{
	putchar(c);
	(*size)++;
}

/**
 * print_integer - prints an integer
 * @args: list of arguments
 * @size: pointer to the size counter
 */
void print_integer(va_list args, int *size)
{
	int n = va_arg(args, int);
	int div = 1;
	unsigned int num;

	if (n < 0)
	{
		putchar('-');
		num = n * -1;
		(*size)++;
	}
	else
		num = n;

	while (num / div > 9)
		div *= 10;

	while (div != 0)
	{
		putchar('0' + num / div);
		num %= div;
		div /= 10;
		(*size)++;
	}
}
