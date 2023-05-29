#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int put_char(char c);
int pu_ts(char *s);
void print_int(int num);

#endif
