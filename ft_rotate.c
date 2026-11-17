void rotate_silence(t_stack **stack)
{
    t_stack *first;
    t_stack *last;

    if (*stack == NULL || (*stack)->next == NULL)
        return ;
    first = *stack;
    last = *stack;
    while (last->next != NULL)
        last = last->next;
    *stack = first->next;
    last->next = first;
    first->next = NULL;
}

void ra(t_stack **a)
{
    rotate_silence(a);
    write(1, "ra\n", 3);
}

void rb(t_stack **b)
{
    rotate_silence(b);
    write(1, "rb\n", 3);
}

void rr(t_stack **a, t_stack **b)
{
    rotate_silence(a);
    rotate_silence(b);
    write(1, "rr\n", 3);
}