t_stack *ft_new_node(int nbr)
{
    t_stack *new_node;
    new_node = malloc(sizeof(t_stack));
    if(!new_node)
        return(NULL);
    new_node->number = nbr;
    new_node->next = NULL;
    return(new_node);
}

void ft_add_back(t_stack **a, t_stack *new_node)
{
    t_stack *temp;

    if(*a == NULL)
        *a = new_node;
    else
    {
        temp = *a;
        while(temp->next != NULL)
            temp = temp->next;
        temp->next = new_node;
    }
}