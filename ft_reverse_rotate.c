void reverse_rotate_silence(t_stack **stack)
{
    t_stack *first;
    t_stack *last;
    t_stack *second_last;

    if (*stack == NULL || (*stack)->next == NULL)
        return ;
    first = *stack;
    last = *stack;
    second_last = *stack;
    while (last->next != NULL)
    {
        second_last = last;
        last = last->next;
    }
    *stack = last;
    second_last->next = NULL;
    last->next = first;
}

void rra(t_stack **a)
{
    reverse_rotate_silence(a);
    write(1, "rra\n", 4);
}

void rrb(t_stack **b)
{
    reverse_rotate_silence(b);
    write(1, "rrb\n", 4);
}

void rrr(t_stack **a, t_stack **b)
{
    reverse_rotate_silence(a);
    reverse_rotate_silence(b);
    write(1, "rrr\n", 4);
}