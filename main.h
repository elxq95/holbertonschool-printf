#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

void print_char(va_list args, int *size);
void print_string(va_list args, int *size);
void print_percent(int *size);
void print_normal(char c, int *size);
void pick_operation(char flag, va_list args, int *size);
void print_integer(va_list args, int *size);
int _printf(const char *format, ...);

#endif
