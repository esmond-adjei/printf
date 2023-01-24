#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _printf - prints buffer
 * @format: formats
 *
 * Return: 0 or 1 or i.
 */
int _printf(const char *format, ...)
{
	va_list op;
	int i = 0;

	va_start(op, format);
	if (format == NULL)
	{
		return (1);
	}
	while (format[i])
	{
		while (format[i] != '%' && format[i])
		{
			_putchar(format[i]);
			if (format[i] == '\0')
				return (i);
			i++;
		}
		while (format[i] == '%' && format[i + 1] != '\0' && format[i])
		{
			if (format[i + 1] == 'c')
				_putchar(va_arg(op, int));
			if (format[i + 1] == 's' && va_arg(op, char*) != NULL)
				printstr(va_arg(op, char*));
			if (format[i + 1] == 'i' && va_arg(op, int*) != NULL)
				printint(va_arg(op, int*));
			if (format[i + 1] == 'd' && va_arg(op, int*) != NULL)
				printdecimal(va_arg(op, int*));
			i++;
		}
		if (format[i] == '\0')
			return (0);
		i++;
	}
	va_end(op);
	return (0);
}
