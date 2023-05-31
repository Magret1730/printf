#include "main.h"
/**
 * print_u - prints unsigned decimal
 * @n: number
 * Description: function that prints unsigned
 * decimal according to %u specifier
 * Return: count, decimal to be printed
 */

int print_u(unsigned int n)
{
	int count = 0;
	unsigned int no, div, d;

	if (n == 0)
	{
		put_char('0');
		count++;
	}
	else
	{
		no = n;
		div = 1;

		while (no / div > 9)
			div = div * 10;

		while (div != 0)
		{
			d = no / div;
			put_char('0' + d);
			count++;
			no = no % div;
			div = div / 10;
		}
	}

	return (count);
}
