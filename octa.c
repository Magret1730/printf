#include "main.h"
/**
 * octa - prints octadecimal
 * @args: variable argument
 * Description: function that prints octadecimal
 * numbers according to printf %o
 * Return: count
 */

int octa(va_list args)
{
	int count = 0, i, d = 0;
	unsigned int n = va_arg(args, unsigned int);
	char octal[100];
	unsigned int t;


	if (n == 0)
	{
		put_char('0');
		return (1);
	}

	/* Count the number of digits in the octal representation */
	t = n;
	while (t != 0)
	{
		d++;
		t = t / 8;
	}


	/* Convert the number to octal by repeatedly dividing by 8 */
	for (i = d - 1; i >= 0; i--)
	{
		octal[i] = (n % 8) + '0';
		n /= 8;
	}

	/* Print the octal digits */
	for (i = 0; i < d; i++)
	{
		put_char(octal[i]);
		count++;
	}

	return (count);
}

