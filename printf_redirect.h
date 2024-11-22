#ifndef PRINTF_REDIRECT_H
#define PRINTF_REDIRECT_H

#ifdef __cplusplus
extern "C" {
#endif

// Typedef for the custom putchar function
typedef void (*putchar_func_t)(char);

// Sets the custom putchar function
void printf_set_putchar(putchar_func_t func);

// The putchar function used by the printf library
void _putchar(char character);

#ifdef __cplusplus
}
#endif

#endif // PRINTF_REDIRECT_H
