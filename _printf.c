#include "main.h"

/**
 * _printf - funtion.
 * @format: lists the arguments passed
 * Return: Always 0.
 */
int _printf(const char *format, ...)
{
	va_list, valist;
	unsigned int i = 0, j = 0;

	va_start(valist, format);

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1)
			for (i = 0; format != NULL && format[i] != '\0'; i++)
			{
				if (formatted[i] == '%')
				{
					if (format[i + 1] == '%')
					{
						_putchar('%');
						j++;
						i++;
					}
					else if (typefor(format, i + 1) != NULL)
					{
						j += _typefor(format, i + 1)(valist);
						i++
					}
					else
					{
						_putcher(fomart[i]);
						j++
					}
				}
				else
				{
					_putchar(format[i]);
					j++;
				}
			}
	va_end(valist);
	return (j);
}
