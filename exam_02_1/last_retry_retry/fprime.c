#include <stdio.h>
#include <stdlib.h>

void    fprime(int nbr)
{
    int i = 2;
    if (nbr == 1)
        printf("1");
    while (nbr >= i)
    {
        if (nbr % i == 0)
        {
            printf("%d", i);
            if (nbr != i)
                printf("*");
            nbr /= i;
        }
        else
            i++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
        fprime(atoi(argv[1]));
    printf("\n");
    return (0);
}