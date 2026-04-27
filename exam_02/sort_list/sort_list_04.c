#include <unistd.h>

void    ft_swap(t_list *a, t_list *b)
{
    int tmp;
    tmp = a->data;
    a->data = b->data;
    b->data = tmp;
}

t_list  *sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list  *start;
    start = lst;
    if (!lst)
        return (NULL);
    while (lst->next)
    {
        if (((cmp)(lst->data, lst->next->data)) == 0)
        {
            ft_swap(lst, lst->next);
            lst = start;
        }
        else
        {
            lst = lst->next;
        }
    }
    return (start);
}
