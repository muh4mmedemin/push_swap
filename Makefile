NAME = push_swap
SRCS = src/main/push_swap.c src/parsing/check_error.c src/parsing/modified_split.c src/stack_operations/utils_for_stack.c src/stack_operations/stack_a.c src/algorithms/muayna.c \
		commands/sa.c commands/sb.c commands/ss.c commands/pb.c commands/pa.c commands/ra.c commands/rb.c commands/rra.c commands/rrb.c \
		src/algorithms/muayna_utils.c src/algorithms/radix_utils.c src/algorithms/radix.c

DIRLIBFT = libs/libft
DIRPRINTF = libs/ft_printf
LIBS = libs/libft/libft.a libs/ft_printf/libftprintf.a

OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
ARFLAGS = -rcs
RM = rm -rf

all: rom $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

rom:
	make -C $(DIRLIBFT)
	make -C $(DIRPRINTF)
rom_fclean:
	make -C $(DIRLIBFT) fclean
	make -C $(DIRPRINTF) fclean
rom_clean:
	make -C $(DIRLIBFT) clean
	make -C $(DIRPRINTF) clean
rom_re:
	make -C $(DIRLIBFT) re
	make -C $(DIRPRINTF) re

.PHONY: all clean fclean re
