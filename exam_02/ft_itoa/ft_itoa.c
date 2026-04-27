#include <unistd.h>

char    *ft_itoa(int nbr)
{
    char    *str;
    long    n = nbr;
    int len = 0;
    if (n <= 0)
        len = 1;
    long    tmp = n;
    while (tmp != 0)
    {
        tmp /= 10;
        len++;
    }
    str = malloc(len + 1);
    if (!str)
        return (NULL);
    str[len] = '\0';
    if (n == 0)
        str[o] = '0';
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
