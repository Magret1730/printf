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
	switch (*format)
	{
		case 'c':
			/*pu_ts(args, count);*/
			put_char(va_arg(args, int));
			count++;
			break;
		case 's':
			count = pu_ts(args, count);
			break;
		case '%':
			put_char('%');
                        count++;
                        break;
		default:
			break;
	}
	return (count);
}
