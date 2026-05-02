#include <unistd.h>

int seen_already(char *str, char c)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (0);
}

int main(int argc, char **argv)
{
    int i;
    int j;
    if (argc == 3)
    {
        i = 0;
        j = 0;
        while (argv[1][i])
        {
            while (j < i && argv[1][i] != argv[1][j])
                j++;
            if (j == i && seen_already(argv[2], argv[1][i]))
                write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}