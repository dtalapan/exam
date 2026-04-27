#include <unistd.h>

int is_there(char *str, char c)
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
    int i = 0;
    int j;
    if (argc == 3)
    {
        while (argv[1][i])
        {
            j = 0;
            while (j < i && argv[1][j] != argv[1][i])
                j++;
            if (j == i && is_there(argv[2], argv[1][i]))
                write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
