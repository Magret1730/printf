#include "main.h"
/**
 * _printf - prints according to a format
 * @format: argument count
 * Description: function that prints according to a format
 * Return: count
 */
int _printf(const char *format, ...)
{
	va_list argu;
	int count = 0;
	size_t i;
	p_handler hand[] ={{"c", p_char}, {"s", p_str}};

	va_start(argu, format);
	if (format == NULL)
	{
		va_end(argu);
		return (-1);
	}
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			count++;
		}
		else
		{
			format++;
			if (*format == '\0')
				return (-1);
			for (i = 0; i < sizeof(hand) / sizeof(hand[0]); i++)
			{
				if (*format == *hand[i].spec)
				{
					count += hand[i].p_func(argu);
					break;
				}
			}
			if (i == sizeof(hand) / sizeof(hand[0]))
			{
				write(1, "%", 1);
				count++;
			}
		}
		format++;
	}
	va_end(argu);
	return (count);
}
