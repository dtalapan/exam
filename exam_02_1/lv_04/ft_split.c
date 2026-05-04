#include <stdlib.h>

int count_words(char *str)
{
    int count = 0;
    while (*str)
    {
        while (*str && (*str == ' ' || *str == '\t' || *str == '\n'))
            str++;
        if (*str)
            count++;
        while (*str && !(*str == ' ' || *str == '\t' || *str == '\n'))
            str++;
    }
    return (count);
}

char    **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int k;
    char **split;
    if (!str)
        return (0);
    split = (char **)malloc(sizeof(char *) * 1024);
    /*split = (char *)malloc(sizeof(char *)* (count_words + 1));*/
    if (!split)
        return (NULL);
    while (str[i])
    {
        while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        if (str[i])
        {
            split[j] = (char *)malloc(sizeof(char ) * 1000);
            /*split[j] = (char *)malloc(sizeof(char) * (count_words + 1));*/
            k = 0;
            while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
            {
                splt[j][k] == str[i];
                i++;
                k++;
            }
            split[j][k] = '\0';
            j++;
        }
    }
    split[j] = NULL;
    return (split);
}