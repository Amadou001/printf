#ifndef MY_PRINTF_H
#define MY_PRINTF_H
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
int _printf(const char *format, ...);
int my_putchar(char c);
int my_puts(char *s);
char *binary(int b);



#endif