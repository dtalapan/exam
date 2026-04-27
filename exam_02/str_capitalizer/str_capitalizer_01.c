#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;
    if (argc < 2)
    {
        write(1, "\n", 1);
    }
    else
    {
        i = 1;
        while (i < argc)
        {
            j = 0;
            while (argv[i][j])
            {
                if (argv[i][j] >= 'A' && argv[i][j] <= 'Z')
                    argv[i][j] += 32;
                if ((j == 0 || argv[i][j - 1] == ' ' || argv[i][j - 1] == '\t') && (argv[i][j] >= 'a' && argv[i][j] <= 'z'))
                    argv[i][j] -= 32;
                write(1, &argv[i][j], 1);
                j++;
            }
            write(1, "\n", 1);
            i++;
        }
    }
    return (0);
}
