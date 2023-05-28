#include "main.h"

/**
 * _printf - the function that produces output according to a format
 * @format:  is a character string
 * Description: function that produces output according to a format
 * Return: returns count
 */

int _printf(const char *format, ...)
{
	unsigned int x, count = 0;

	va_list vary;

	va_start(vary, format);
	if (format == NULL)
		return (-1);
	for (x = 0; format[x] != '\0'; x++)
	{
		if (format[x] != '%')
			put_char(format[x]);
		count += 1;
		if (format[x] == '%')
		{
			if (format[x + 1] == 'c')
			{
				put_char(va_arg(vary, int));
				x++;
			}
			else if (format[x + 1] == 's')
			{
				pu_ts(va_arg(vary, char *));
				x++;
			}
			else if (format[x + 1] == '%')
			{
				put_char('%');
			}
			count += 1;
		}
	}
	va_end(vary);
	return (count);
}

