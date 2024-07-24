#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
    int len1, len2;

    printf("Custom _printf output:\n");
    len1 = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", NULL);
    printf("Length from _printf: %d\n", len1);

    printf("Standard printf output:\n");
    len2 = printf("Complete the sentence: You %s nothing, Jon Snow.\n", NULL);
    printf("Length from printf: %d\n", len2);

    return 0;
}
