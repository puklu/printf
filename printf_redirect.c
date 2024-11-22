#include "printf_redirect.h"

// static variable to hold the custom putchar function
static putchar_func_t custom_putchar = 0;

void printf_set_putchar(putchar_func_t func)
{
    custom_putchar = func;
}

void _putchar(char character)
{
    if(custom_putchar)
    {
        custom_putchar(character);
    }
}