#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        int a = atoi(argv[1]);
        int b = atoi(argv[3]);
        char    op = argv[2][0];
        if (op == '+')
            printf("%d", a + b);
        else if (op == '-')
            printf("%d", a - b);
        else if (op == '*')
            printf("%d", a * b);
        else if (op == '/')
            printf("%d", a / b);
        else if (op == '%')
            printf("%d", a % b);
    }
    else
    {
        printf("\n");
    }
    return (0);
}