#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int valistf(char c, va_list op);
/**
 * valistf - prints buffer
 * @c: formats
 * @op: valist op
 * Return: 0 or 1 or i.
 */
int valistf(char c, va_list op)
{
	char *str;
	int num;

	if (c == 'c')
		_putchar(va_arg(op, int));
	else if (c == 's')
	{
		str = va_arg(op, char*);
		printstr(str);
	}
	else if (c == 'i')
	{
		num = va_arg(op, int);
		if (num == 0)
			_putchar('0');
		else
			printint(num);
	}
	else if (c == 'd')
	{
		num = va_arg(op, int);
		if (num == 0)
			_putchar('0');
		else
			printint(num);
	}
	return (0);
}
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
	char fmtval;

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
			fmtval = format[i + 1];
			valistf(fmtval, op);
/**			if (format[i + 1] == 'c')
				_putchar(va_arg(op, int));
			if (format[i + 1] == 's' && va_arg(op, char*) != NULL)
			printstr(va_arg(op, char*));*/
			/*if (format[i + 1] == 'i')
			{
				inT = va_arg(op, int);
				printf("%i", inT);
			}
			if (format[i + 1] == 'd')
			{
				printf("%i", va_arg(op, int));
			}*/
			i++;
			break;
		}
		if (format[i] == '\0')
			return (i);
		i++;
	}
	va_end(op);
	return (i);
}
