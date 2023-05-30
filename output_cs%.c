#include "main.h"
/**
 * _printf - prints output according to a format
 * @format: format string
 * Return: Number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	char c, *s;

	va_start(args, format);
	if (format == NULL)
	{
		va_end(args);
		return (-1);
	}
	while (*format)
	{
		if (*format != '%')
		{
			put_char(*format);
			count++;
		}
		else
		{
			format++;
			if (*format == '\0')
			{
				va_end(args);
				return (-1);
			}
			if (*format == 'c')
			{
				c = va_arg(args, int);
				put_char(c);
				count++;
			}
			else if (*format == 's')
			{
				s = va_arg(args, char *);
				count += (s == NULL ? pu_ts("(null)") : pu_ts(s));
			}
			else if (*format == '%')
			{
				put_char('%');
				count++;
			}
			else
			{
				va_end(args);
				return (-1);
			}
		}
		format++;
	}
	va_end(args);
	return (count);
}
