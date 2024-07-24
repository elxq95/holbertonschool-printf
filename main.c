#include "main.h"
#include <stdio.h>

/**
 * main - entry point to test _printf function
 * Return: Always 0
 */
int main(void)
{
    int len1, len2;

    printf("Testing trailing %% (should return -1):\n");
    len1 = _printf("Hello %");
    printf("Length from _printf: %d\n\n", len1);

    printf("Testing a simple string:\n");
    len1 = _printf("Hello, World!\n");
    len2 = printf("Hello, World!\n");
    printf("Length from _printf: %d\n", len1);
    printf("Length from printf: %d\n\n", len2);

    printf("Testing format specifier %%c:\n");
    len1 = _printf("Character: %c\n", 'A');
    len2 = printf("Character: %c\n", 'A');
    printf("Length from _printf: %d\n", len1);
    printf("Length from printf: %d\n\n", len2);

    printf("Testing format specifier %%s:\n");
    len1 = _printf("String: %s\n", "Hello");
    len2 = printf("String: %s\n", "Hello");
    printf("Length from _printf: %d\n", len1);
    printf("Length from printf: %d\n\n", len2);

    printf("Testing format specifier %%%%:\n");
    len1 = _printf("Percent sign: %%\n");
    len2 = printf("Percent sign: %%\n");
    printf("Length from _printf: %d\n", len1);
    printf("Length from printf: %d\n\n", len2);

    printf("Testing unsupported format specifier %%K:\n");
    len1 = _printf("Unsupported format: %K\n");
    len2 = printf("Unsupported format: %K\n");
    printf("Length from _printf: %d\n", len1);
    printf("Length from printf: %d\n\n", len2);

    printf("Testing unsupported format specifier %%!:\n");
    len1 = _printf("Unsupported format: %!\n");
    len2 = printf("Unsupported format: %!\n");
    printf("Length from _printf: %d\n", len1);
    printf("Length from printf: %d\n\n", len2);

    return 0;
}
