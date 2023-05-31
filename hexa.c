#include "main.h"

int recurs_hexa(unsigned int n);

/**
 * _hexa - prints unsigned integer in hexadecimal format
 * @args: arguments
 * Return: Number of characters printed
 */
int _hexa(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	if (n == 0)
	{
		put_char('0');
		return (1);
	}

	return (recurs_hexa(n));
}

/**
 * recurs_hexa - recursively converts and prints the hexadecimal
 * @n: the number to convert and print
 * Return: Number of characters printed
 */
int recurs_hexa(unsigned int n)
{
	char hexa[100];
	int count = 0, r;

	if (n == 0)
	{
		return (count);
	}

	count += recurs_hexa(n / 16);

	r = n % 16;
	if (r < 10)
		hexa[count++] = r + '0';
	else
		hexa[count++] = r - 10 + 'A';

	put_char(hexa[count - 1]);
	return (count);
}
