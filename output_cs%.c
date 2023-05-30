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
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		va_end(vary);
		return (-1);
	}
	else if (format[0] == '%' && format[1] == '%' && format[2] == '\0')
	{
		count += put_char('%');
		va_end(vary);
		return (count);
	}
	for (x = 0; format[x] != '\0'; x++)
	{
		if (format[x] != '%')
			count += put_char(format[x]);
		else if (format[x] == '%')
		{
			if (format[x + 1] == 'c')
			{
				count += put_char(va_arg(vary, int));
				x++;
			}
			else if (format[x + 1] == 's')
			{
				count += pu_ts(va_arg(vary, char *));
				x++;
			}
			else if (format[x + 1] == '%')
			{
				count += put_char('%');
				x++;
			}
		}
	}
	va_end(vary);
	return (count);
}
