#include "libft.h"

int ft_isnumber(char *str)
{
    int i;

    i = 0;
    if (str[i] == '-' || str[i] == '+')
        i++;
    if (str[i] == '-' || str[i] == '+')
    {    
        write(2, "Error\n", 6);
        return (0);
    }
    if (str[i] == '\0')
    {
        write(2, "Error\n", 6);
        return(0);
    }
    while(str[i])
    {
        if(!ft_isdigit(str[i]))
        {
            write(2, "Error\n", 6);
            return (0);
        }
        i++;
    }
    return (1);
}

long ft_atol(const char *nptr)
{
	long	i;
	long    s;
	long    res;

	i = 0;
	s = 1;
	res = 0;
	while (nptr[i] >= 9 && nptr[i] <= 13)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			s *= -1;
		i++;
	}
	if (nptr[i] == '-' || nptr[i] == '+'
		|| (!(nptr[i] >= '0' && nptr[i] <= '9')))
		return (0);
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = res * 10 + (nptr[i] - '0');
		i++;
	}
	return (res * s);
}

int ft_islimit(char *str)
{
    long    i;

    i = 0;
    i = ft_atol(str);
    if(i < -2147483648 || i > 2147483647)
    {    
        write(2, "Error\n", 6);
        return (0);
    }
    return (1);
}

int ft_check_duplicate(t_stack *a, int nbr)
{
    while (a != NULL)
    {
        if (a->number == nbr)
        {
            write (2, "Error\n", 6);
            return (0);
        }
        else
            a = a->next;
    }
    return (1);
}