#include <stdlib.h>

char    *ft_itoa(int nbr)
{
    int     len = 0;
    long    n = nbr;
    char    *str;
    if (n <= 0)
        len = 1;
    long    tmp = n;
    if (tmp < 0)
        tmp = -tmp;
    while (tmp > 0)
    {
        tmp /= 10;
        len++;
    }
    str = malloc(len + 1);
    str[len] = '\0';
    if (n == 0)
        str[0] = '0';
    if (n < 0)
    {
        str[0] = '-';
        n = -n;
    }
    while (n > 0)
    {
        str[--len] = (n % 10) + '0';
        n /= 10;
    }
    return (str);
}
