#ifndef MainHeader
#define MainHeader

#include <stdarg.h>

void print_char(va_list args);

void print_string(va_list args);

void print_percent(void);

void pick_operation(char flag, va_list args);

void print_normal(char c);

int _printf(const char *format, ...);

#endif
