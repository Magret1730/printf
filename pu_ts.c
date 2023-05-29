#include "main.h"
/**
 * pu_ts - prints string
 * @s: string to print
 * Return: Number of characters printed.
 */
int pu_ts(char *s)
{
	int count = 0;

	if (s == NULL)
		s = "(null)";

	while (*s)
	{
		put_char(*s);
		count++;
		s++;
	}

	return (count);
}
