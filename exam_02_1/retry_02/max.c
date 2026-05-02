int max(int* tab, unsigned int len)
{
    unsigned int i = 0;
    int result;
    if (!tab || len == 0)
        return (0);
    result = tab[0];
    while (i < len)
    {
        if (tab[i] > result)
            result = tab[i];
        i++;
    }
    return (result);
}