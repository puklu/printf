#ifndef PRINTF_CONFIG_H
#define PRINTF_CONFIG_H

// PRINTF_INCLUDE_CONFIG_H must be defined as a complier switch
// for this to be picked up

// disable everything that is not used to sace flash space
#define PRINTF_DISABLE_SUPPORT_LONG_LONG
#define PRINTF_DISABLE_SUPPORT_PTRDIFF_T
#define PRINTF_DISABLE_SUPPORT_EXPONENTIAL
#define PRINTF_DISABLE_SUPPORT_FLOAT

#endif // PRINTF_CONFIG_H