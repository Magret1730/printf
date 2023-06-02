#include "main.h"
/**
 * specifier_p - handles specifier p
 * @format: printed value begins
 * Description: handles format specifier %p just like
 * printf
 * Return: void
 */

int specifier_p(const char *format, ...)
{
	va_list args;
	int i, nibble;
	char c;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%' && *(format + 1) == 'p')
		{
			void* ptr = va_arg(args, void*);
			unsigned long address = (unsigned long)ptr;

			put_char('0');
			put_char('x');

			for (i = sizeof(address) * 2 - 1; i >= 0; i--)
			{
				nibble = (address >> (i * 4)) & 0xF;
				c = nibble < 10 ? '0' + nibble : 'a' + nibble - 10;
				put_char(c);
			}
			format += 2;
		}
		else
		{
			put_char(*format);
			format++;
		}
	}

	va_end(args);
	return (1);
}
