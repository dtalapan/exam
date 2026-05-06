void    ft_swap(char *a, char *b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

char    *ft_strrev(char *str)
{
    int len = 0;
    int i = 0;
    while (str[len])
        len++;
    len--;
    while (i < len)
    {
        ft_swap(&str[i], str[len]);
        i++;
        len--;
    }
    return (str);
}