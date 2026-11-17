void sa(t_stack **a)
{
    t_stack *first;
    t_stack *second;

    if (*a == NULL || (*a)->next == NULL)
        return ;
    first = *a;
    second = first->next;
    first->next = second->next;
    second->next = first;
    *a = second;
    write(1, "sa\n", 3);
}

void sb(t_stack **b)
{
    t_stack *first;
    t_stack *second;

    if (*b == NULL || (*b)->next == NULL)
        return ;
    first = *b;
    second = first->next;
    first->next = second->next;
    second->next = first;
    *b = second;
    write(1, "sb\n", 3);
}

void ss(t_stack **a, t_stack **b)
{
    t_stack *first;
    t_stack *second;

    if ((*a == NULL || (*a)->next == NULL) && (*b == NULL || (*b)->next == NULL))
        return ;
    if (*a != NULL && (*a)->next != NULL)
    {
        first = *a;
        second = first->next;
        first->next = second->next;
        second->next = first;
        *a = second;
    }
    if (*b != NULL && (*b)->next != NULL)
    {    
        first = *b;
        second = first->next;
        first->next = second->next;
        second->next = first;
        *b = second;
    }
    write(1, "ss\n", 3);
}

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
