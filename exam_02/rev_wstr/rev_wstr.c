#include <unistd.h>

void    rev_wstr(char *s)
{
    int i = 0;
    int end;
    int start;
    while (s[i])
        i++;
    while (i >= 0)
    {
        while (i >= 0 && (s[i] == ' ' || s[i] == '\t' || s[i] == '\0'))
            i--;
        end = i;
        while (i >= 0 && s[i] != ' ' && s[i] != '\t')
            i--;
        start = i + 1;
        int tmp = start;
        while (tmp <= end)
        {
            write(1, &s[tmp], 1);
            tmp++;
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
