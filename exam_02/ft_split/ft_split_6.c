#include <stdlib.h>

int count_words(char *str)
{
    int count = 0;
    while (*str)
    {
        while (*str && (*str ==' ' || *str == '\t' || *str == '\n'))
            str++;
        if (*str)
            count++;
        while (*str && !(*str ==' ' || *str == '\t' || *str == '\n'))
            str++;
    }
    return (count);
}

char    **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int k;
    char    **split;
    split = (char **)malloc(sizeof(char *)* (count_words(str) + 1));
    if (!split)
        return (NULL);
    while (str[i])
    {
        while (str[i] == ' ' || str[i] == '\t')
            i++;
        if (str[i])
        {
            split[j] = (char *)malloc(sizeof(char) * (count_words(str) + 1));
            k = 0;
            while (str[i] && str[i] != ' ' && str[i] != '\t')
            {
                split[j][k] = str[i];
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
