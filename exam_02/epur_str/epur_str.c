#include <unistd.h>

int main(int argc, char **argv)
{
    int t;
    int j;
    if (argc == 2)
    {
        t = 1;
        j = 0;
        while (*argv[1] != '\0')
        {
            if (*argv[1] == ' ' || *argv[1] == '\t')
                t = 0;
            else
            {
                if (t == 0 && j == 1)
                    write(1, " ", 1);
                t = 1;
                j = 1;
                write(1, argv[1], 1);
            }
            argv[1]++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
