#include "main.h"

int my_printf(const char *format, ...)
{
int i;
unsigned int count = 0, s_count = 0, i_count;
va_list args;
va_start(args, format);
if (format)
{
    for (i = 0; format[i] != '\0'; i++)
    {
        if (format[i] != '%')
        {
            my_putchar(format[i]);
        }
        else if (format[i + 1] == 'c')
        {
            my_putchar(va_arg(args, int));
            i++;
        }
        else if (format[i + 1] == 's')
        {
            s_count = my_puts(va_arg(args, char *));
            count += s_count - 1;
            i++;
        }
        else if (format[i + 1] == '%')
        {
            my_putchar('%');
            i++;
        }
        else if (format[i + 1] == 'd' || format[i + 1] == 'i')
        {   int k = va_arg(args, int);
            char buffer[13];
            int len = snprintf(buffer, sizeof(buffer), "%d", k);  
            i_count = write(1, buffer, len); 
            count += i_count - 1;     
            i++;
        }
      count ++;  
    }
}
va_end(args);
return count;
}

