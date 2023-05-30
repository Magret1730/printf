#include "main.h"

/**
 * print_int - prints integer
 * @args: argument to print
 * @count: argument to print
 * Return: Number of characters printed.
 */
int print_int(va_list args, int count)
{
	int i, d, digits, div = 1;
	int n = va_arg(args, int);

	digits = help_print_int(n);

	if (n < 0)
	{
		put_char('-');
		count++;
		n = -n;
	}

	for (i = 1; i < digits; i++)
		div *= 10;

	while (div != 0)
	{
		d = n / div;
		put_char('0' + d);
		count++;
		n %= div;
		div /= 10;
	}
	return (count);
}
