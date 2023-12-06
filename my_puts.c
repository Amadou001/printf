#include "main.h"

int my_puts(char *s)
{
    unsigned s_count;
    for (s_count = 0; s[s_count] != '\0'; s_count++)
    {
        my_putchar(s[s_count]);
    }
    return s_count;
}
