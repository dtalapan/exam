#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;
    if (argc == 2)
    {
        i = 1;
        j = 0;
        while (*argv[1])
        {
            if (*argv[1] == ' '|| *argv[1] == '\t')
                i = 0;
            else
            {
                if (i == 0 && j == 1)
                    write(1, "   ", 3);
                i = 1;
                j = 1;
                write(1, argv[1], 1);
            }
            argv[1]++;
        }
    }
    write(1, " \n", 1);
    return (0);
}