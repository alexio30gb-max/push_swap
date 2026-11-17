void pa(t_stack **a, t_stack **b)
{
    t_stack *fb;

    if (*b == NULL)
        return ;
    fb = *b;
    *b = fb->next;
    fb->next = *a;
    *a = fb;
    write(1, "pa\n", 3);
}

void pb(t_stack **a, t_stack **b)
{
    t_stack *fa;

    if (*a == NULL)
        return ;
    fa = *a;
    *a = fa->next;
    fa->next = *b;
    *b = fa;
    write(1, "pb\n", 3);
}