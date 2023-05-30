#include "main.h"

/**
 * _printf - entry point of _print_f function
 * @format: character string
 * Return: count
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);
	 if (format == NULL)
	{
		va_end(args);
		return (-1);
	}
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			count += pick(format, args, count);
			format++;
		}
		else
		{
			put_char(*format);
			count++;
			format++;
		}
	}
	va_end(args);
	return (count);
}
