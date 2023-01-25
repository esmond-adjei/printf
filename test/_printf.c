#include "main.h"

int _printf(const char *format, ...)
{
	va_list args;
	unsigned int len = 0;

	va_start(args, format);
	while(*format != '\0')
	{
		_putchar(format);
		len++;
	}
	va_end(args);

	return (len);
}
