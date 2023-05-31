#include "main.h"

/**
 * print_bin - function that print the unsigned
 * int argument is converted to binary
 * @n: the unsigned integer to be converted to binary and printed
 * @count:the count of characters printed so far.
 * Return: returns binary
 */
int print_bin(unsigned int n, int count)
{
	int binary[32];
	int i = 0;
	int j;

	if (n == 0)
	{
		put_char('0');
		return (count + 1);
	}

	if (n > 0)
	{
		binary[i] = n % 2;
		n /= 2;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		put_char('0' + binary[j]);
		count++;
	}
	return (count);
}
