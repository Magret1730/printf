#include "main.h"

/**
 * p_str - prints strings
 * @argu: variable name
 * Description: function that prints strings
 * Return: count (strings)
 */

int p_str(va_list argu)
{
	char *s;
	int count = 0;

	s = va_arg(argu, char *);
	if (s != NULL)
	{
		while (*s)
		{
			write(1, s, 1);
			s++;
			count++;
		}
	}
	else
	{
		write(1, "(nil)", 5);
		count = 5;
	}
	return (count);
}
