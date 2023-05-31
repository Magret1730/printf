#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>


int _printf(const char *format, ...);
int put_char(char o);
int pu_ts(va_list args, int count);
int pick(const char *format, va_list args, int count);
int print_int(va_list args);
int help_print_int(int n);
int print_bin(unsigned int n, int count);
int print_u(unsigned int n);
int octa(va_list args);
int _hexa(va_list args);
int recurs_hexa(unsigned int n);

#endif
