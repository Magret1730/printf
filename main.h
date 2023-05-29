#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct p_handlers- handles the specifiers
 * @spec: specifier string
 * @p_func: function pointer to the corresponding print function
 *
 * Description: This struct associates format specifiers with their
 *              respective print functions.
 */

typedef struct p_handlers
{
	char *spec;
	int (*p_func)(va_list);
} p_handler;

int _printf(const char *format, ...);
int p_char(va_list argu);
int p_str(va_list argu);

#endif
