#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int start = 0;
    if (argc == 2)
    {
        while (argv[1][i])
            i++;
        while (i > 0 && (argv[1][i - 1] == ' ' || argv[1][i - 1] == '\t'))
            i--;
        start = i + 1;
        while (start > 0 && !(argv[1][start - 1] == ' ' || argv[1][start - 1] == '\t'))
            start--;
        while (start < i)
        {
            write(1, &argv[1][start], 1);
            start++;
        }
    }
    write(1, "\n", 1);
    return (0);
}