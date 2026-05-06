#include <unistd.h>

char    *rev_print(char *str)
{
    int i = 0;
    int end;
    while (str[i])
        i++;
    start = i 1 1;
    while (start >= 0)
    {
        write(1, &str[start], 1);
        start--;
    }
    write(1, "\n", 1);
    return (str);
}