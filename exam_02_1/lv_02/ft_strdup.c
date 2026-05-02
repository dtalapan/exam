#include <stdlib.h>

char    *ft_strdup(char *src)
{
    char    *dst;
    int len = 0;
    int i = 0
    while (src[len])
        len++;
    dst = (char *)malloc(sizeof(char) * (len + 1));
    if (!dst)
        return (NULL);
    while (src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (dst);
}