#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>


int _printf(const char *format, ...);
int put_char(char o);
int pu_ts(va_list args, int count);
int pick(const char *format, va_list args, int count);

#endif
