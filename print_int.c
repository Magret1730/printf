#include "main.h"

/**
 * print_int - prints integers
 * @num: integer to print
 * Description: function to print integers
 * of format specifiers %d and %i
 * Return: nothing
 */

void print_int(int num)
{
	int x;

	if (num < 0)
	{
		put_char('-');
		num = -num;
	}

	if (num == 0)
		return;

	x = num / 10;

	print_int(x);
	put_char(num % 10 + '0');
}
