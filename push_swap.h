#include <unistd.h>
#include <stdlib.h>

typedef struct s_stack
{
	int			number;
	struct s_stack	*next;
}	t_stack;

int ft_isnumber(char *str);
int ft_islimit(char *str);
long ft_atol(const char *nptr);
