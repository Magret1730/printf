#include "main.h"
/**
 * help_pick - picks the format specifiers
 * @args: arguements
 * @count: printed characters
 * @format: the format specifier
 * Return: count
 */
int help_pick(const char *format, va_list args, int count)
{
	while (*format)
	{
		switch (*format)
		{
			case 'S':
				count += specifier_hexa(args);
				break;
			default:
				return (-1);
		}
		format++;
	}
	return (count);
}
