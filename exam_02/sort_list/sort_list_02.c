void    ft_swap(t_list *a, t_list *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

t_list  *sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list  *start;
    start = last;
    while(lst->next)
    {
        if (((*cmp)(lst->data, lst->next->data)) == 0)
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
