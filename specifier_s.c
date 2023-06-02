#include "main.h"
/**
 * specifier_hexa - prints string with non-printable
 * characters represented as \x
 * @args: arguments
 * Return: Number of characters printed
 */
int specifier_hexa(va_list args)
{
	const char *string = va_arg(args, const char*);
	int count = 0, lowNibble, highNibble;

	if (string == NULL)
		return (0);
	while (*string)
	{
		if (*string < 32 || *string >= 127)
		{
			put_char('\\');
			put_char('x');
			highNibble = *string >> 4;
			if (highNibble < 10)
				put_char(highNibble + '0');
			else
			{
				put_char(highNibble + 'A' - 10);
			}
			lowNibble = *string & 0x0F;
			if (lowNibble < 10)
				put_char(lowNibble + '0');
			else
				put_char(lowNibble + 'A' - 10);
			count = count + 4;
		}
		else
		{
			put_char(*string);
			count++;
		}
		string++;
	}
	return (count);
}
