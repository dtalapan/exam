#include <unistd.h>

void    rev_wstr(char *str)
{
    int i = 0;
    int end;
    int start;
    while (str[i])
        i++;
    while (i >= 0)
    {
        while (i >= 0 && (str[i] == ' ' || str[i] == '\t' || str[i] == '\0'))
            i--;
        end = i;
        while (i >= 0 && !(str[i] == ' ' || str[i] == '\t' || str[i] == '\0'))
            i--;
        start = i + 1;
        while (start <= end)
        {
            write(1, &str[start], 1);
            start++;
        }
        if (i >= 0)
            write(1, " ", 1);
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
        rev_wstr(argv[1]);
    write(1, "\n", 1);
    return (0);
}