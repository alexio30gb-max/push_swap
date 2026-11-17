NAME = push_swap

FILES = ft_add_new_node.c ft_comprobate_numbers.c ft_movements.c

OBJECTS = ft_add_new_node.o ft_comprobate_numbers.o ft_movements.o

%.c %.o:
	@cc -Werror -Wextra -Wall -c -o $@ $<
all: $(NAME)

$(NAME):$(OBJECTS)
	@ar rcs $(NAME) $(OBJECTS)
clean:
	rm -f $(OBJECTS)
fclean: clean
	rm -f $(NAME)
re: fclean all

