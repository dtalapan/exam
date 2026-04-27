#include <stdlib.h>

char    **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int k;
    char    **split;
    split = (char **)malloc(sizeof(char *)* 1024);
    if (!split)
        return (NULL);
    while (str[i])
    {
        while (str[i] == ' ' || str[i] == '\t')
            i++;
        if (str[i])
        {
            split[j] = (char *)malloc(sizeof(char) * 1000);
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
