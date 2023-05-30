#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int _printf(const char *format, ...);
int put_char(char c);
int pu_ts(char *s);
int (*print_specs(const char *format))(va_list);


/**
 * struct spec - struct for specifiers
 * @h: character 
 * @fun_ptr: fuunction handler
 */
typedef struct spec
{
	char *h;
	int (*fun_ptr)(va_list);
} specs;

int p_char(va_list);
int p_str(va_list);
int p_cent(va_list);


#endif
