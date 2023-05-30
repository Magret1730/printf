#include "main.h"
/**
 * pu_ts - prints string
 * @arg: argument to print
 * @count: argument to print
 * Return: Number of characters printed.
 */
int pu_ts(va_list args, int count)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
		s = "(null)";

	while (*s != '\0')
	{
		if (put_char(*s) == -1)
			return (-1);
		count++;
		s++;
	}

	return (count);
}
