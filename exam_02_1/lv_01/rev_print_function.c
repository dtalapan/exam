#include <unistd.h>

char    *rev_print(char *str)
{
    int i = 0;
    int end;
    while (str[i])
        i++;
    end = i - 1;
    while (end > 0)
    {
        write(1, &str[end], 1);
        end--;
    }
    write(1, "\n", 1);
    return (str);
}