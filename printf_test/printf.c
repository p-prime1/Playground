#include "main.h"

int _printf(const char *format, ...)
{
	va_list arg;
	va_start (arg, format);
	int i;
      	i = 0; 

	for ( ; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				_putchar(format[i + 1]);
				continue;
			}
			else if (format[i + 1] == 'c')
			{
				char j = va_arg(arg, int);
				_putchar(j);
				i++;
				continue;
			}
			else if (format[i + 1] == 's')
			{
				int l = 0;
				char *k;
				k = va_arg(arg, char*);
				while (k[l] != '\0')
				{
					_putchar(k[l]);
					l++;
				}
				i++;
				continue;
			}
			else if (format[i + 1] == 'd')
			{
				int n = va_arg(arg, int);
				_putchar(n + '0');
				i++;
			}
		}
		else
		{
			_putchar(format[i]);
		}
	}
	va_end(arg);
}

