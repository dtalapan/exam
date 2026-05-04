#include <unistd.h>

int ft_atoi(char *str)
{
    int result = 0;
    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + (*str - '0');
        str++;
    }
    return (result);
}

void    ft_print_hex(int nbr)
{
    char    *hex_char = "0123456789abcdef";
    if (nbr >= 16)
        ft_print_hex(nbr / 16);
    write(1, &hex_char[nbr % 16], 1);
}

int main(int argc, char **argv)
{
    if (argc == 2)
        ft_print_hex(ft_atoi(argv[1]));
    write(1, "\n", 1);
    return (0);
}