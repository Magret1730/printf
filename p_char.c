#include "main.h"

/**
 * p_char - prints characters
 * @argu: variable name
 * Description: function that prints characters
 * Return: 1
 */

int p_char(va_list argu)
{
	int c;

	c = va_arg(argu, int);
	write(1, &c, 1);
	return (1);
}
