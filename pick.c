#include "main.h"
/**
 * pick - picks the format specifiers
 * @args: arguements
 * @count: printed characters
 * @format: the format specifier
 * Return: count
 */
int pick(const char *format, va_list args, int count)
{
	while (*format)
	{
		switch (*format)
		{
			case 'c':
				put_char(va_arg(args, int));
				count++;
				break;
			case 's':
				count += pu_ts(args, count);
				break;
			case '%':
				put_char('%');
				count++;
				break;
			case 'i':
			case 'd':
				count += print_int(args);
				break;
			case 'b':
				count += print_bin(va_arg(args, unsigned int), count);
				break;
			case 'u':
				count += print_u(va_arg(args, unsigned int));
				break;
			case 'o':
				count += octa(args);
				break;
			case 'x':
			case 'X':
				count += _hexa(args);
				break;
			default:
				return (-1);
		}
		format++;
	}
	return (count);
}
