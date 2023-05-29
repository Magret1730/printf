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
		{
			count += put_char(format[x]);
		}
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

/**
 * pu_ts - the function prints string
 * @s: string to be printed
 * Description: the function print string
 * It emulate the standard library puts
 * Return: count
 */

int pu_ts(char *s)
{
	int x = 0, count = 0;

	if (s == NULL)
		return (0);
	for (x = 0; s[x] != '\0'; x++)
	{
		count += put_char(s[x]);
	}
	return (count);
}


/**
 * put_char - prints character
 * @o: argument to accept
 *
 * Description: A function that prints character
 * Emulating the putchar standard library function
 * Return: integer
 */

int put_char(char o)
{
	return (write(1, &o, 1));
}


