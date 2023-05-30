#include "main.h"
/**
 * help_print_int - calculates the number of digits in an integer
 * @n: the integer
 * Return: Number of digits in the integer
 */
int help_print_int(int n)
{
	int count = 0;

	if (n == 0)
		return (1);

	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}
