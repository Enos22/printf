#include "main.h"

/**
 * _printf - funtion for the printf format
 * @format: lists the arguments passed
 * Description: select the format
 *
 * Return: total number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	const char *trav;
	int (*pfunc)(va_list);

	int count = 0;

	va_start(args, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	for (trav = format; *trav; trav++)
	{
		if (*trav == '%')
		{
			trav++;
			pfunc = get_print(*trav);
			count += (pfunc)
				? pfunc(args)
				: _printf("%%%c", *trav);
		}
		else
			count += _putchar(*trav);
	}
	va_end(args);
	return (count);
}
