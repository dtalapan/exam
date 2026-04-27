#include <unistd.h>

void rostring(char *str)
{
    int i = 0;
    int first_word_start;
    int first_word_end;

    while (str[i] == ' ' || str[i] == '\t')
        i++;
    first_word_start = i;
    while (str[i] && str[i] != ' ' && str[i] != '\t')
        i++;
    first_word_end = i;
    if (str[i])
    {
        while (str[i])
        {
            if (str[i] != ' ' && str[i] != '\t')
            {
                while (str[i] && str[i] != ' ' && str[i] != '\t')
                {
                    write(1, &str[i], 1);
                    i++;
                }
                write(1, " ", 1);
            }
            else
                i++;
        }
    }
    while (first_word_start < first_word_end)
    {
        write(1, &str[first_word_start], 1);
        first_word_start++;
    }
}

int main(int argc, char **argv)
{
    if (argc > 1)
        rostring(argv[1]);
    write(1, "\n", 1);
    return (0);
}
